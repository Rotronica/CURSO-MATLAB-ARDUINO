%Autor: Calle Condori Rodrigo
%Curso Arduino básico e introduccion a la comunicación Arduino Matlab
%Organizado por la SCEIEIE
%Señal Analógica
%Sintaxis: voltage = readVoltage(a,pin)
clear;
clc;
a=arduino('COM3','Uno'); %creamos el objeto
for i = 0:100
    voltaje = readVoltage(a,'A0');
    fprintf('Voltaje: %0.2f \n',voltaje);
    pause(0.3);
end