--Área do retângulo
arearet :: Float -> Float -> Float
arearet w h = w*h

--Perímetro do retângulo
perret :: Float -> Float -> Float
perret w h = 2*w + 2*h

--Tempo em que percorreu distância
tempo :: Float -> Float -> Float
tempo d v = v/d

--Sequência
func :: Int -> Int
func n | n==0 = 1
       | (n==1 || n==2) = 3
       | otherwise = func(n-1) + func(n-2)

--Verifica se é Triangulo Retangulo
ver :: Float -> Float -> Float -> String
ver c1 c2 h | (h == sqrt(c1*c1 + c2*c2)) = "É retângulo"
            | otherwise = "Não é retângulo"

--Soma dos ímpares
somaI :: [Int] -> Int
somaI [] = 0
somaI (cabeca:cauda) | (cabeca`mod`2 == 1) = cabeca + somaI cauda
                     | otherwise = somaI cauda

--Verifica Primo
primo :: Int -> String
primo n = verprimo n 1 0

verprimo :: Int -> Int -> Int -> String
verprimo n t q | ((n == t) && q == 2) = "E primo"
               | (n`mod`t == 0) = verprimo n (t+1) (q+1)
               | otherwise = verprimo n (t+1) q

--MUV
muvWhere :: Float -> Float -> Float -> Float
muvWhere vi vf t = vf*t + (a/2)*(t*t)
    where a = (vf - vi)/t 

muvLet :: Float -> Float -> Float -> Float
muvLet vi vf t = let a = (vf - vi)/t in vf*t + (a/2)*(t*t)

--Soma Natural
somaNat :: Int -> Int -> Int
somaNat a b |(b == 0) = a 
            |(a == 0) = b
            |a>b = somaNat (a+1) (b-1)
            |otherwise = somaNat (a-1) (b+1)
        
--nÉsimo elemento da lista
nEsimo :: Int -> [Int] -> Int
nEsimo n (cabeca:cauda) = percorre n 1 (cabeca:cauda)

percorre :: Int -> Int -> [Int] -> Int
percorre n q (cabeca:cauda) | (n == q) = cabeca
                            | otherwise = percorre n (q+1) cauda

--Inserir elemento na primeira posição
inserePrimeiro :: Int -> [Int] -> [Int]
inserePrimeiro n (cabeca:cauda) = [n] ++ (cabeca:cauda)
 
--Inserir elemento em qualquer posição
inserePosicao :: Int -> [Int] -> Int -> [Int]
inserePosicao n (cabeca:cauda) p  = procura n (cabeca:cauda) 1 p

procura :: Int -> [Int] -> Int -> Int -> [Int]
procura n (cabeca:cauda) a p | (a == p) = n:cabeca:cauda
                             | otherwise = cabeca:procura n cauda (a+1) p

--Trocar caracteres
trocaCaracter :: Char -> Char -> [Char] -> [Char]
trocaCaracter _ _ [] = [] 
trocaCaracter c b (cabeca:cauda) | (c == cabeca) = b:trocaCaracter c b cauda
                                 | otherwise = cabeca:trocaCaracter c b cauda

--Inverter Lista
inverteLista :: [Int] -> [Int]
inverteLista [] = []
inverteLista (cabeca:cauda) = (inverteLista cauda) ++ [cabeca]

--Primeiros elementos
iniciais :: [Int] -> Int -> [Int]
iniciais (cabeca:cauda) n = anda (cabeca:cauda) n 1

anda :: [Int] -> Int -> Int -> [Int]
anda [] _ _ = []
anda (cabeca:cauda) n q | (n == q)  = [cabeca]
                        | (n > q) = cabeca:anda cauda n (q+1)

--Ultimos elementos
finais :: [Int] -> Int -> [Int]
finais (cabeca:cauda) n = andaT (cabeca:cauda) (length(cabeca:cauda)-n-1) 0

andaT :: [Int] -> Int -> Int -> [Int]
andaT [] _ _ = []
andaT (cabeca:cauda) n q | (n == q) = cauda
                         | (n > q) = andaT cauda n (q+1)