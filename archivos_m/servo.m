%Autor: Calle Condori Rodrigo
%Curso Arduino básico e introduccion a la comunicación Arduino Matlab
%Organizado por la SCEIEIE
% Limpiar el espacio de trabajo y la consola
clear;
clc;
a = arduino('COM3', 'Uno', 'Libraries', 'Servo');%crea el objeto arduino
%s = servo(a, 'D4'); %crea el objeto arduino con un anco de pulso por
%defecto

%Consulte los valores del rango de ancho de pulso de su servomotor en 
% la hoja de datos para calibrarlo y que gire dentro del rango esperado. 
% En este ejemplo, se utilizan 700e-6 y 2300e-6 para que el motor gire 
% de 0 a 180 grados.
s = servo(a, 'D4', 'MinPulseDuration', 700e-6, 'MaxPulseDuration', 2500e-6);%crea el objeto arduino

%Escribir y leer la posición del servo
%Cambie la posición del eje del servomotor de 0 (mínimo) a 1 (máximo) en 
% incrementos de 0,2 (p. ej., 36 grados). Visualice la posición actual cada 
% vez que cambie.
%si 1   -->180°
%   0.2 -->x
%   x=(0.2*180)/1 = 36°
for angle = 0:0.2:1
    writePosition(s, angle);
    current_pos = readPosition(s);
    current_pos = current_pos*180;
    fprintf('Current motor position is %d degrees\n', current_pos);
    pause(1);
end
%vuelve el ángulo a cero 
angle_init = 0;
writePosition(s,angle_init);