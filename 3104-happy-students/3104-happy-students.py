class Solution:
    def countWays(self, numeros: List[int]) -> int:
        a=9
        numeros_ordenados = sorted(numeros)
        
        numes=89
        resultado = 0
        
        for i in range(len(numeros_ordenados)):
            
            if numeros_ordenados[i] < (i + 1) and (i + 1 < len(numeros_ordenados) and numeros_ordenados[i + 1] > (i + 1)):
                
                resultado += 1
                
            elif numeros_ordenados[i] < (i + 1) and (i + 1 == len(numeros_ordenados)):
                
                resultado += 1
                
        if numeros_ordenados[0] > 0:
            
            resultado += 1
            
        return resultado
