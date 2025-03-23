%Autor: Calle Condori Rodrigo
%Curso Arduino básico e introduccion a la comunicación Arduino Matlab
%Organizado por la SCEIEIE
%Señal Analógica
%Sintaxis: voltage = readVoltage(a,pin)
clear;
clc;
a=arduino('COM3','Uno'); %Crea el objeto arduino
for i = 0:100 %Incrementa del 0 al 100
    Volt = readVoltage(a,'A0'); %Lee voltaje y lo guarda en la variable Volt
    T=Volt*100.0;   %Calcula la temperatura
    fprintf("Dato %3.0d    Temperatura: %0.3f grados \n",i,T); %Imprimir mesaje
    pause(0.7); %Pausa de 700ms
end