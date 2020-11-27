from tkinter import *
from DCM_Hub import openHub
from os import getcwd, chdir, path ; chdir(path.join("Assignment1", "DCM")) ;print(getcwd())

def openWelcome():

    #functions to Login and Create newUser
    def checkLogin(userCheck,pw):
        userDatabase= open("userDatabase.txt","r")
        user= open("currentUser.txt", "w")
        for row in userDatabase:
            field = row.split(",")
            username = field[0]
            password = field[1]
            lastchar = len(password)-1
            password = password[0:lastchar]
            if userCheck == username and pw == password:
                user.write(userCheck)
                user.close()
                userDatabase.close()
                openHub()
                return
        loginStatus= Label(welcomeScreen, text="Username or Password incorrect")
        loginStatus.grid(row= 4, column= 2)
        userDatabase.close()
        return
                

    def createNewUser():
        userDatabase = open("userDatabase.txt","r")
        numUser=0
        for row in userDatabase:
            field = row.split(",")
            username = field[0]
            password = field[1]
            lastchar = len(password)-1
            password = password[0:lastchar]
            numUser+=1
            if userNew.get() == username:
                createUserStatus= Label(welcomeScreen, text="Username Taken")
                createUserStatus.grid(row= 8, column= 2)
                return
        userDatabase.close()
        if numUser == 10:
            createUserStatus= Label(welcomeScreen, text="Maximum Users Already made")
            createUserStatus.grid(row= 8, column= 2)
            return
        else:
            userDatabase= open("userDatabase.txt","a")
            userDatabase.write (userNew.get())
            userDatabase.write (",")
            userDatabase.write (passwordNew.get())
            userDatabase.write("\n")
            userDatabase.close()
            createUserStatus= Label(welcomeScreen, text="User Created")
            createUserStatus.grid(row= 8, column= 2)
            return

    # create main Welcome Screen
    welcomeScreen= Tk()
    welcomeScreen.title('Pacemaker DCM')
    welcomeScreen.geometry("450x400")

    # create Labels
    welcomeLabel= Label(welcomeScreen, text="Welcome", font=(None, 50, 'underline'))
    loginLabel= Label(welcomeScreen, text="Login:", font=(None, 25))
    newUserLabel= Label(welcomeScreen, text="New User:", font=(None, 25))

    # create Entries 
    user= Entry(welcomeScreen, width= 25)
    user.insert(0, "Enter Your Username")
    password= Entry(welcomeScreen, width=25)
    password.insert(0, "Enter You Password")
    userNew= Entry(welcomeScreen, width= 25)
    userNew.insert(0, "Enter Your Username")
    passwordNew= Entry(welcomeScreen, width=25)
    passwordNew.insert(0, "Enter You Password")

    # create Buttons
    login= Button(welcomeScreen, text="Login", command= lambda: checkLogin(user.get(),password.get()))
    makeNewUser= Button(welcomeScreen, text="Make New User", command= createNewUser)

    # organize objects
    welcomeLabel.grid(row=0, column=0)
    loginLabel.grid(row=1, column=0)
    newUserLabel.grid(row=5, column=0)
    user.grid(row=2, column= 0)
    password.grid(row=3, column=0)
    userNew.grid(row=6, column=0)
    passwordNew.grid(row=7, column=0)
    login.grid(row=4, column=1)
    makeNewUser.grid(row=8, column=1)

    mainloop()
