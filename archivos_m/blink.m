%Autor: Calle Condori Rodrigo
%Curso Arduino básico e introduccion a la comunicación Arduino Matlab
%Organizado por la SCEIEIE
%configura el pin como salida o entrada:    pinMode = configurePin(a,pin)
%                                                    configurePin(a,pin,mode) 
%Escribe el pin ya se como 1 o 0 (encendido o apagado): writeDigitalPin(a,pin,value)
clear;
clc;
a = arduino('COM3','Uno');  %Cre el objeto arduino
configurePin(a,'D13', "DigitalOutput"); %Configura el pin D13 comfigura como salida de señal del arduino
for i = 0:20    %Bucle for incrementa hasta que sea 10, llega al 10 se sale del bucle y el programa finaliza
    writeDigitalPin(a,"D13",1);
    pause(0.5); %Pausa de 500ms
    writeDigitalPin(a,"D13",0);
    pause(0.5); %Pausa de 500ms
end

