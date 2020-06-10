import serial

arduino = serial.Serial('COM3', 9600)
repeticion= 0
print("Comencemos!")
print("Direccione>> \n w Adelante \n s Atrás  \n a Izquierda \n d Derecha \n q Aumentar velocidad \n e Disminuir velocidad")

a= True
while a:
    
      comando = input('Introduzca una dirección : ') 
      arduino.write(str(comando).encode()) 
      if(repeticion==0):
          print("Si desea salir presione n  ")
          repeticion=repeticion+1
          
      if (comando== 'n'):
          print("¡Nos vemos pronto!! ")
          a= False
          
