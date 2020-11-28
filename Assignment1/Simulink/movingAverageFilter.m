classdef movingAverageFilter < matlab.System
    % Untitled Add summary here
    %
    % This template includes the minimum set of functions required
    % to define a System object with discrete state.

    % Public, tunable properties
    properties(Nontunable)
        WindowLength (1,1){mustBeInteger,mustBePositive} = 5
    end
    
    % Pre-computed constants
    properties(Access = private)
        State;
        pNumChannels = -1;
    end
    
    properties(Access = private, Nontunable)
        pCoefficients
    end

    methods(Access = protected)
        function obj = movingAverageFilter(varargin)
        % Support name-value pair arguments when constructing object
        setProperties(obj,nargin,varargin{:})
        end
        
        function setupImpl(obj,x)
        % Perform one-time calculations, such as computing constants
            obj.pNumChannels = size(x,2);
            obj.pCoefficients = ones(1,obj.WindowLength)/obj.WindowLength;
            obj.State = zeros(obj.WindowLength-1,obj.pNumChannels,'like',x);
        end
         
        function y = stepImpl(obj,u)
            [y,obj.State] = filter(obj.pCoefficients,1,u,obj.State);
        end
        
        function resetImpl(obj)
        % Initialize / reset discrete-state properties
            obj.State(:) = 0;
        end
        
        function releaseImpl(obj)
            obj.pNumChannels = -1;
        end
        
        function validateInputsImpl(obj,u)
            % Validate inputs to the step method at initialization
        end

        function loadObjectImpl(obj,s,wasLocked)
            % Set properties in object obj to values in structure s

            % Set private and protected properties
            % obj.myproperty = s.myproperty; 

            % Set public properties and states
            loadObjectImpl@matlab.System(obj,s,wasLocked);
        end

        function s = saveObjectImpl(obj)
            % Set properties in structure s to values in object obj

            % Set public properties and states
            s = saveObjectImpl@matlab.System(obj);

            % Set private and protected properties
            %s.myproperty = obj.myproperty;
        end

        
        
    end
end
