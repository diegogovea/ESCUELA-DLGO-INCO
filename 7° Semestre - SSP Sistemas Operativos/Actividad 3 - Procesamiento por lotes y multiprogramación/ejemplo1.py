import threading
import time
import datetime
from tkinter import *
from tkinter import ttk

window=Tk()
window.title('Multiprocess and lote')
window.geometry("600x400")


def lotes():
    #print#jdjd
    for x in range(50):
        if(my_prSong['value']<=98):
            my_prSong['value']+=4
            PorcentAudio.config( text=my_prSong['value'])
            window.update_idletasks()
            time.sleep(0.01)#pausas de 1ms
    for x in range(50):
        if(my_prVideo['value']<=98):
            my_prVideo['value']+=2
            PorcentMP.config( text=my_prVideo['value'])
            window.update_idletasks()
            time.sleep(0.01)#pausas de 0.1ms
    for x in range(50):
        if(my_prIMG['value']<=99):
            my_prIMG['value']+=10
            PorcentIMG.config( text=my_prIMG['value'])
            window.update_idletasks()
            time.sleep(0.01)



def multi():
    t1.start()
    t2.start()
    t3.start()


def song():
    for x in range(100):
        if(my_prSong['value']<=99):
                my_prSong['value']+=x
                PorcentAudio.config( text=my_prSong['value'])
                window.update_idletasks()
                time.sleep(0.02)
    return



def video():
    for x in range(100):
        if(my_prVideo['value']<=99):
                my_prVideo['value']+=x
                PorcentMP.config( text=my_prVideo['value'])
                window.update_idletasks()
                time.sleep(0.15)
    return

def img ():
    for x in range(100):
        if(my_prIMG['value']<=99):
                my_prIMG['value']+=x
                PorcentIMG.config( text=my_prIMG['value'])
                window.update_idletasks()
                time.sleep(0.01)
    return

def stop():
    my_prSong.stop()
    PorcentAudio.config( text="")
    my_prVideo.stop()
    PorcentMP.config( text="")
    my_prIMG.stop()
    PorcentIMG.config( text="")


lbSpace= Label(window, text=" ")
lbSpace.pack(pady=20)

#creacion de hilos
tiempo=datetime.datetime.now()
t1=threading.Thread(name="hilo_1", target=video )
t2=threading.Thread(name="hilo_2", target=img)
t3=threading.Thread(name="hilo_3", target=song)

button_frame = Frame(window)
button_frame.pack()

#AUDIO


lbCancion= Label(window, text="Deleting song")
lbCancion.pack(pady=5)
my_prSong = ttk.Progressbar(window, orient=HORIZONTAL,
                              length=300, mode='determinate')
my_prSong.pack()
PorcentAudio= Label(window, text=" ")
PorcentAudio.pack(pady=10)



#Vide
lbMP= Label(window, text="Deleting video")
lbMP.pack(pady=5)
my_prVideo = ttk.Progressbar(window, orient=HORIZONTAL,
                              length=300, mode='determinate')
my_prVideo.pack()
PorcentMP= Label(window, text=" ")
PorcentMP.pack(pady=10)


multibtn=Button(button_frame, text="MULTIPROCES", command=multi)
multibtn.pack(side=LEFT, padx=5)
lotesbtn=Button(button_frame, text="LOTES", command=lotes)
lotesbtn.pack(side=LEFT, padx=5)



#pic
lbIMG= Label(window, text="Deleting picture")
lbIMG.pack(pady=5)
my_prIMG = ttk.Progressbar(window, orient=HORIZONTAL,
                              length=300, mode='determinate')
my_prIMG.pack()
PorcentIMG= Label(window, text=" ")
PorcentIMG.pack(pady=10)

my_button=Button(button_frame, text="RESET", command=stop)
my_button.pack(side=LEFT, padx=20)

window.mainloop()
