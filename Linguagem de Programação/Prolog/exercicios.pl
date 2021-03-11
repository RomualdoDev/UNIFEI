%--Termo da sequência de fibonacci
fibo(0,0) :- !.
fibo(1,1) :- !.
fibo(X,Y) :- X > 1,
             N1 is X - 1,
             N2 is X - 2,
             fibo(N1, F1),
             fibo(N2, F2),
             Y is F1 + F2.


%--Fatorial de um numero
fatorial(0,1).
fatorial(X,Y) :- X>0,
                 X2 is X-1,
                 fatorial(X2, Y1),
                 Y is X * Y1.

%--Insere no final da lista
insereFinal(X,[],[X]).
insereFinal(X,[H|T],[H|X1]) :- insereFinal(X,T,X1).

%--Insere na posição
insereP(X,Y,[],[X]) :- !.
insereP(X,1,[H|T],[X,H|T]) :- !.
insereP(X,Y,[H|T],[H|X1]) :- B is Y - 1,
                             insereP(X,B,T,X1).
                            
%--Remove elemento da lista
removeP(X,[],[]) :- !.
removeP(1,[H|T],T) :- !.
removeP(X,[H|T],[H|X1]) :- B is X - 1,
                           removeP(B,T,X1).

%--Somatorio dos elementos da lista
somatorio([],0).
somatorio([H|T],X) :- somatorio(T,S),
                      X is H + S.
                      
%--Inverte lista
concatena([],Lista,Lista) :- !.
concatena([H|L1],L2,[H|L3]) :- concatena(L1,L2,L3).

inverte([],[]).
inverte([H|T],Z) :- inverte(T,X),
                    concatena(X,[H],Z).