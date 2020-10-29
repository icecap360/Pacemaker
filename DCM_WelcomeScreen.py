from tkinter import *


userDatabase=[]
#functions to Login and Create newUser
def checkLogin():
    if (user.get(),password.get()) in userDatabase:
        print("PASS") #change to open HUB
        return
    else:
        print("FAIL") #change to make fail Label
        loginStatus= Label(welcomeScreen, text="Username or Password incorrect")
        loginStatus.grid(row= 4, column= 2)
        return

def createNewUser():
    for i in userDatabase:
        if userNew.get() == i[0]:
            print("user already made")
            createUserStatus= Label(welcomeScreen, text="Username Taken")
            createUserStatus.grid(row= 8, column= 2)
            return
    if len(userDatabase) == 10:
        print("user data base full")
        createUserStatus= Label(welcomeScreen, text="Maximum Users Already made")
        createUserStatus.grid(row= 8, column= 2)
        return
    else:
        userDatabase.append((userNew.get(),passwordNew.get()))
        createUserStatus= Label(welcomeScreen, text="User Created")
        createUserStatus.grid(row= 8, column= 2)
        return

# create main Welcome Screen
welcomeScreen= Tk()
welcomeScreen.title('Pacemaker DCM')
welcomeScreen.geometry("400x400")

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
login= Button(welcomeScreen, text="Login", command=checkLogin)
makeNewUser= Button(welcomeScreen, text="Make New User", command=createNewUser)

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
