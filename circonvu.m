clc;close all;clear all;
x = input('enter the first sequence');
h = input('enter the second sequence');
N1 = length(x)
N2 = length(h)
N = max(N1,N2)
x = [x zeros(1,N-N1)]
h = [h zeros(1,N-N2)]
y = cconv(x,h,N)

n =1:N
disp("output of circular convolution")
disp(y)
pause;
stem(n,y)
grid minor;
xlable('time index');
ylable('amplitude');
title('circular convolution sequence of x and h');


