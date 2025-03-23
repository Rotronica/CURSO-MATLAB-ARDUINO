%Autor: Calle Condori Rodrigo
%Curso Arduino básico e introduccion a la comunicación Arduino Matlab
%Organizado por la SCEIEIE
%El siguiente programa realiza el encendido de un led conectado al pin D13
%mediante un pulsador conectado al pin D4

clear;  %limpial workspace
clc;    %limpiar el comman Window
a=arduino('COM3','Uno');    %Crea el olbejo arduino
configurePin(a,'D13','DigitalOutput');  %Configura el pin D13 como salida
configurePin(a,'D4','DigitalInput');    %Configura el pin D4 como entrada
while i<100     %Bucle, mientras i sea menor a 100 se seguira ejecutando lo que esta en el bucle 
    if readDigitalPin(a,'D4')==0        %Si el pin D4 le entra una señal
        writeDigitalPin(a,'D13',1);     %Prende el pin D13
        i=i+1;                          %Incremeta i
        fprintf("%d veces encendido\n",i);%Imprimir mensaje 
    else    %Si no
        writeDigitalPin(a,'D13',0);     %Apagar el pin D13

    end
end
writeDigitalPin(a,'D13',0);             %Apagar el pin D13
