%%
%OR
close all; clear all; clc;

%stworzenie pojedynczego neuronu o zakresach [0,1] [0,2]
net=newp([0 1;0 2],1);
%stworzenie dwóch wektorów, odpowiadaj¹cych wszystkim mo¿liwym wejœciom 
%bramki logiczniej OR
A=[0 0 1 1];
B=[0 1 0 1];
%po³¹czenie ich w jedn¹ macierz
P=[A;B];
%stworzenie wektora  opisuj¹cego wartoœci wynikowe odpowiadaj¹ce bramce 
%logicznej NOR dla powy¿szych wektorów A i B
T=[0 1 1 1];

%inicjalizacja sieci perceptronowe z losow¹ wartoœci¹ wag
net=init(net);
%wywo³anie symulacji przed treningiem
Przed_treningiem=sim(net,P)
%przetestowanie dzia³ania sieci dla innych wektorów
test1=sim(net,[1 0 1 1;0 0 1 1])
test2=sim(net,[0 1 0 0;0 0 0 0])
%ustawienie 15 epok do okreœlenia treningu sieci
net.trainParam.epochs=15;
%uruchomienie treningu
net=train(net,P,T);
%symulacja sieci neuronowej dla wartoœci okreœlonych po treningu
Po_treningu=sim(net,P)
%ponowne przetestowanie dla tych samych wektorów, co poprzednio
test1po=sim(net,[1 0 1 1;0 0 1 1])
test2po=sim(net,[0 1 0 0;0 0 0 0])

