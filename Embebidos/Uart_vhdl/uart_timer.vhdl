-- Practica de lab. 2: Transmision serial
--  * Modulo de Timer para uart
-- Autor: Oscar Díaz
-- Fecha: 15 de Octubre de 2015

library ieee;
use ieee.std_logic_1164.all;

entity uart_timer is
    port(
        clk: in std_logic;              -- Señal de reloj
        activar_general: in std_logic;  -- Activa el timer cuando hay que enviar un dato
        ocupado: in std_logic;          -- Mantiene el funcionamiento del timer mientras estoy transmitiendo
        ticks: out std_logic            -- Ticks que marcan los instantes de envio de cada bit
    );
end entity uart_timer; 

architecture impl of uart_timer is

    begin
    
end architecture impl;
