%Autor: Calle Condori Rodrigo
%Curso Arduino básico e introduccion a la comunicación Arduino Matlab
%Organizado por la SCEIEIE
%Señal Analógica
%El siguiente programa realiza la lectura de una señal analógica
%potenciometro el cual se visualiza pon una grafica en tiempo real
clear;
clc;
a=arduino('COM3','Uno'); %Crea el objeto arduino
figure;  % Crea una nueva figura
hold on;  % Mantiene la gráfica activa para añadir más datos
x = 0:100;  % Vector de tiempo (iteraciones)
y = zeros(1, 101);  % Vector para almacenar los voltajes

for i = 1:101
    y(i) = readVoltage(a, 'A0');  % Lee el voltaje
    fprintf('Voltaje: %0.2f \n', y(i));  % Muestra el voltaje
    grid;
    plot(x(1:i), y(1:i), '-r');  % Grafica los datos en tiempo real
    xlabel('Iteración');
    ylabel('Voltaje (V)');
    title('Señal Analógica en A0');
    drawnow;  % Actualiza la gráfica
    pause(0.3);  % Pausa entre lecturas
end