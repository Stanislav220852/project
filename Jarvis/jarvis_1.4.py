import json,pyaudio
from vosk import Model, KaldiRecognizer
import webbrowser
import pyaudio
from playsound import playsound 
import os
import time
import pyautogui
import keyboard
import pyautogui
import random
from pycaw.pycaw import AudioUtilities, ISimpleAudioVolume



playsound("sounds/nachinaju-diagnostiku-sistemy.wav")

num = 0
model = Model('D:/vosk-model-small-ru-0.22')

rec = KaldiRecognizer(model, 16000)

p = pyaudio.PyAudio()

stream = p.open(format=pyaudio.paInt16,
                channels=1,
                rate=16000,
                input=True,
                frames_per_buffer=8000)

stream.start_stream()




def randnum():
    num = random.randint(1,5)
    if num == 1:
        playsound("sounds/da-sjer.wav")
    elif num == 2:
        playsound("sounds/vsegda-k-vashim-uslugam-sjer.wav")
    elif num == 3:
        playsound("sounds/kak-pozhelaete-.wav")
    elif num == 4:
        playsound("sounds/zapros-vypolnen-sjer.wav")
    elif num == 5:
        playsound("sounds/zagruzhaju-sjer.wav")
    else:
        print("Error")
def randnum2():

    num = random.randint(1,2)
    if num == 1:
        playsound("sounds/nachinau.wav")
    if num == 2:
        playsound("sounds/my-podkljucheny-i-gotovy.wav")


    
def video_clic():
    if num == 1:
        play_button_x = 650  
        play_button_y = 520
        pyautogui.moveTo(play_button_x, play_button_y)
        pyautogui.click()
    elif num == 2:
        play_button_x = 1150  
        play_button_y = 520
        pyautogui.moveTo(play_button_x, play_button_y)
        pyautogui.click()
    elif num == 3:
        play_button_x = 1650  
        play_button_y = 520
        pyautogui.moveTo(play_button_x, play_button_y)
        pyautogui.click()
    elif num == 4:
        play_button_x = 2150  
        play_button_y = 520
        pyautogui.moveTo(play_button_x, play_button_y)
        pyautogui.click()
    elif num == 5:
        play_button_x = 650  
        play_button_y = 1050
        pyautogui.moveTo(play_button_x, play_button_y)
        pyautogui.click()
    elif num == 6:
        play_button_x = 1150  
        play_button_y = 1050
        pyautogui.moveTo(play_button_x, play_button_y)
        pyautogui.click()
    elif num == 7:
        play_button_x = 1650  
        play_button_y = 1050
        pyautogui.moveTo(play_button_x, play_button_y)
        pyautogui.click()
    elif num == 8:
        play_button_x = 2150  
        play_button_y = 1050
        pyautogui.moveTo(play_button_x, play_button_y)
        pyautogui.click()     
    elif num == 9:
        keyboard.press_and_release('ctrl + w')
    elif num == 10:
        keyboard.press_and_release('ctrl + h')
    elif num == 11:
        keyboard.press_and_release('ctrl + f')
        keyboard.write(text)
        keyboard.press_and_release('enter')
    elif num == 12:
        play_button_x = 450  
        play_button_y = 620
        pyautogui.moveTo(play_button_x, play_button_y)
        pyautogui.click()
    elif num == 13:
        keyboard.press_and_release('ctrl + p')
    elif num == 14:
        keyboard.press_and_release('ctrl + s')
    elif num == 15:
        keyboard.press_and_release('ctrl + shift + r')
    elif num == 16:
        keyboard.press_and_release('k')
    elif num == 17:
        keyboard.press_and_release('m')
    elif num == 18:
        keyboard.press_and_release('f')
    elif num == 19:
        keyboard.press_and_release('shift + n')
    elif num == 20:
        webbrowser.open("https://www.google.com/")
    elif num == 21:
        keyboard.press_and_release('win + d')
    elif num == 22:
        keyboard.press_and_release('win + e')
    elif num == 23:
        play_button_x = 1450  
        play_button_y = 1550
        pyautogui.moveTo(play_button_x, play_button_y)
        pyautogui.click()
    elif num == 24:
        keyboard.press_and_release('win + m')
    else:
        print("Error")      
def listen():
    answer = None
    while True:
        data = stream.read(4000, exception_on_overflow=False)
        if len(data) == 0:
            break
        if rec.AcceptWaveform(data):
            answer = json.loads(rec.Result())
        if answer and answer['text']:
            yield answer['text']
            answer = None 

playsound("sounds/obraz-sozdan.wav")
webbrowser.open("https://www.youtube.com/watch?v=pAgnJDJN4VA")
time.sleep(4)
keyboard.press_and_release('win + m')

for  text in listen():
    print(text)
    if text == "джарвис" or text == "джарвис ты тут":
        num = random.randint(1,2)
        if num == 1:
            playsound("sounds/da-sjer.wav")
        if num == 2:
            playsound("sounds/vsegda-k-vashim-uslugam-sjer.wav")
        else:
            print("Error")
    #Управление браузером
    elif(text == "открой гугл"
        or text == "запусти гугл"
        or text == "открой браузер" 
        or text == "запусти браузер"  
        or text == "открой новое окно" 
        or text == "новое окно"
        or text == "джарвис открой гугл"
        or text == "джарвис запусти гугл"
        or text == "джарвис открой браузер" 
        or text == "джарвис запусти браузер"  
        or text == "джарвис открой новое окно" 
        or text == "джарвис новое окно"
    ):
        randnum()
        num = 20
        video_clic()
    elif(text == "закрой браузер" 
        or text == "закрой окно" 
        or text == "закрой"
        or text == "джарвис закрой браузер" 
        or text == "джарвис закрой окно" 
        or text == "джарвис закрой"
    ):
        randnum()
        num = 9
        video_clic()
    elif(text == "открой историю поиска" 
        or text == "история поиска" 
        or text == "открой историю браузера" 
        or text == "история браузера"
        or text == "джарвис открой историю поиска" 
        or text == "джарвис история поиска" 
        or text == "джарвис открой историю браузера" 
        or text == "джарвис история браузера"
    ):
        randnum()
        num = 10
        video_clic()
    elif(text == "поиск на странице" 
        or text == "поищи на странице" 
        or text == "найди на странице" 
        or text == "поиск на сайте"
        or text == "джарвис поиск на странице" 
        or text == "джарвис поищи на странице" 
        or text == "джарвис найди на странице" 
        or text == "джарвис поиск на сайте"
    ):
        randnum()
        text = listen()
        randnum2()
        num = 11
        video_clic()
        playsound("sounds/another-info.wav")
    
    elif(text == "сверни" 
        or text == "свернуть" 
        or text == "сверни страницу" 
        or text == "сверни окно"
        or text == "джарвис сверни" 
        or text == "джарвис свернуть" 
        or text == "джарвис сверни страницу" 
        or text == "джарвис сверни окно"
    ):
        randnum()
        num = 24
        video_clic()
    elif(text == "параметры печати" 
        or text == "настройки печати" 
        or text == "распечатай страницу" 
        or text == "печать"
        or text == "джарвис параметры печати" 
        or text == "джарвис настройки печати" 
        or text == "джарвис распечатай страницу" 
        or text == "джарвис печать"
    ):
        randnum()
        num = 13
        video_clic()
    elif(text == "сохрани" 
        or text == "сохранить" 
        or text == "сохранить страницу" 
        or text =="сохрани страницу"
        or text == "джарвис сохрани" 
        or text == "джарвис сохранить" 
        or text == "джарвис сохранить страницу" 
        or text =="джарвис сохрани страницу"
    ):
        randnum()
        num = 14
        video_clic()
    elif(text == "обнови страницу" 
        or text == "обновить страницу" 
        or text == "обнови" 
        or text == "обновить"
        or text == "джарвис обнови страницу" 
        or text == "джарвис обновить страницу" 
        or text == "джарвис обнови" 
        or text == "джарвис обновить"
    ):  
        randnum()
        num = 15
        video_clic()  
    #Управление музыкой и видео
    elif(text == "включи музыку" 
        or text == "музыка"
        or text == "джарвис включи музыку" 
        or text == "джарвис музыка"
    ):
        randnum()
        webbrowser.open("https://www.youtube.com/watch?v=GOhnPPjgjfI")
    elif(text == "открой ютуб"
        or text == "ютуб"
        or text == "джарвис открой ютуб"
        or text == "джарвис ютуб"
    ):
        randnum()
        webbrowser.open_new_tab("https://www.youtube.com/?hl=ru&gl=BY")
    elif(text == "запусти первое видео" 
        or text == "первое видео"
        or text == "джарвис запусти первое видео" 
        or text == "джарвис первое видео"
    ):
        randnum()
        num = 1
        video_clic()
    elif(text == "запусти второе видео" 
        or text == "второе видео"
        or text == "джарвис запусти второе видео" 
        or text == "джарвис второе видео"
    ):
        randnum()
        num = 2
        video_clic()
    elif(text == "запусти третье видео" 
        or text == "третье видео"
        or text == "джарвис запусти третье видео" 
        or text == "джарвис третье видео" 
    ):
        randnum()
        num = 3
        video_clic()
    elif(text == "запусти четвёртое видео" 
        or text == "четвёртое видео"
        or text == "джарвис запусти четвёртое видео" 
        or text == "джарвис четвёртое видео"
    ):
        randnum()
        num = 4
        video_clic()
    elif(text == "запусти шестое видео" 
        or text == "шестое видео"
        or text == "джарвис запусти шестое видео" 
        or text == "джарвис шестое видео"
    ):
        randnum()
        num = 6
        video_clic()
    elif(text == "запусти пятое видео" 
        or text == "пятое видео"
        or text == "джарвис запусти пятое видео" 
        or text == "джарвис пятое видео"
    ):
        randnum()
        num = 5
        video_clic()
    elif(text == "запусти седьмое видео" 
        or text == "седьмое видео"
        or text == "джарвис запусти седьмое видео" 
        or text == "джарвис седьмое видео"
    ):
        randnum()
        num = 7
        video_clic()
    elif(text == "запусти восьмое видео" 
        or text == "восьмое видео"
        or text == "джарвис запусти восьмое видео" 
        or text == "джарвис восьмое видео"
    ):
        randnum()
        num = 8
        video_clic()
    elif(text == "поставь на паузу" 
        or text == "пауза" 
        or  text =="сними с паузы"
        or text == "джарвис поставь на паузу" 
        or text == "джарвис пауза" 
        or  text =="джарвис сними с паузы"
    ):
        randnum()
        num = 16
        video_clic()
    elif(text == "выключи звук" 
        or text == "включи звук"
        or text == "джарвис выключи звук" 
        or text == "джарвис включи звук"
    ):
        randnum()
        num = 17
        video_clic()
    elif(text == "открой на весь экран" 
        or text == "на весь экран" 
        or text == "закрой на весь экран" 
        or text == "закрыть на весь экран"
        or text == "джарвис открой на весь экран" 
        or text == "джарвис на весь экран" 
        or text == "джарвис закрой на весь экран" 
        or text == "джарвис закрыть на весь экран"
    ):
        randnum()
        num = 18
        video_clic()
    #Управление системой
    elif(text == "сверни все вкладки" 
        or text == "сверни все окна" 
        or text == "сверни все"
        or text == "джарвис сверни все вкладки" 
        or text == "джарвис сверни все окна" 
        or text == "джарвис сверни все"
):
        randnum()
        num = 21
        video_clic()
    elif(text == "открой проводник"
         or text == "джарвис открой проводник"
    ):
        randnum()
        num = 22
        video_clic()
    elif(text == "открой телеграмм" 
        or text == "запусти телеграмм" 
        or text == "телеграмм"
        or text == "джарвис открой телеграмм" 
        or text == "джарвис запусти телеграмм" 
        or text == "джарвис телеграмм"
    ):
        randnum()
        num = 23
        video_clic()
    elif(text == "следующие видео" 
        or text == "следующее"
        or text == "джарвис следующие видео" 
        or text == "джарвис следующее"
    ):
        randnum()
        num = 19
        video_clic()
    elif(text == "заверешние работы" 
        or text == "завершить работу"
        or text == "отключение"
        or text == "джарвис заверешние работы" 
        or text == "джарвис завершить работу"
        or text == "джарвис отключение"
    ):
        randnum()
        playsound("sounds/power-off.wav")
        break
    elif text == "поиск":
        randnum()
        playsound("sounds/nachinaju-diagnostiku-sistemy.wav")
        text = listen()
        if text:
            webbrowser.open("https://www.google.com/search?q=" + next(text))
           
            
            
    #Комбинации
    

    
    
    #Режимы
        
        
        
        
    

        
    
            