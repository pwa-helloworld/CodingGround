import tkinter as tk
from tkinter import ttk

#  window setup
root = tk.Tk()
root.title("This is a title")
root.geometry('600x400+3000+200')
root.resizable(True, False)

# place a label on the root window
msg = ttk.Label(root, text="helloworld").pack()  # this is a widget
# msg.pack()  # positioning the widget on the window




# keep the window displaying
root.mainloop()
