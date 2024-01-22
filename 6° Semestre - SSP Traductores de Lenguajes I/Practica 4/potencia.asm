name "potencia" 

; Programa No. 4 "Conjunto de Instrucciones"
; Govea Ortiz Diego Leon 

;Objetivo:Desarrollar un programa en lenguaje ensamblador  
;en el que se calcule la potencia de un numero de 16 bits, 
;el resultado debe quedar en 32 bits (Utiliza el formato Big Endian),
;en este programa debes crear por lo menos una subrutina que realice la multiplicacion.

    
org  100h	 

mov ax, 1003h  
mov bx, 0        
int 10h

;MENSAJE 1: SECCION D01      

    mov dx, 0203h     
    mov bx, 0         
    mov bl, 0010_1111b  ;FVerde_LBlancas
    mov cx, tamsg1
    mov dl, 32  
    mov al, 01b       
    mov bp, m1
    mov ah, 13h       
    int 10h  
    
;MENSAJE 2: NOMBRE 

    mov dx, 0503h     
    mov bx, 0         
    mov bl, 0101_1111b  ;FVerde_LBlancas 
    mov cx, tamsg2
    mov dl, 26    
    mov al, 01b       
    mov bp, m2
    mov ah, 13h       
    int 10h         
         
 ;MENSAJE 3: ENTRADAS

    mov dx, 0803h     
    mov bx, 0         
    mov bl, 1001_1111b 
    mov cx, tamsg3 
    mov dl, 20  
    mov al, 01b       
    mov bp, m3
    mov ah, 13h       
    int 10h

;MENSAJE 4: SALIDAS
    mov dx, 0903h     
    mov bx, 0         
    mov bl, 1001_1111b 
    mov cx, tamsg4
    mov dl, 20   
    mov al, 01b       
    mov bp, m4
    mov ah, 13h       
    int 10h

;MENSAJE 5: RESULTADO 1
    mov dx, 0A03h     
    mov bx, 0         
    mov bl, 1001_1111b 
    mov cx, tamsg5
    mov dl, 20   
    mov al, 01b       
    mov bp, m5
    mov ah, 13h       
    int 10h 

;MENSAJE 6: RESULTADO 2
    mov dx, 0B03h     
    mov bx, 0         
    mov bl, 1001_1111b 
    mov cx, tamsg6
    mov dl, 20   
    mov al, 01b       
    mov bp, m6
    mov ah, 13h       
    int 10h             

    mov ah, 0          
    int 10110b
   
    mov ax,0
    mov bx,0  
    mov cx,0
    
    
    mov al,[Dato1]
    mov [D1],al
    mov [D2],al
    mov cl,[Dato2]
    call mult
    mov dl,0h
    
                
    dec cl
    dec cl
    mov ax,[P0]
    mov [Prod],ax
    
    cmp cl,dl
    call Potencia
    

    
    int 20h
    
mult:   
    push ax
    push bx
    mov al,[D1]
    mov bl,[D2]
    mul bl
    mov [P0],ax
    pop bx
    pop ax
    ret
   
   Potencia:
        mov ax,[Prod]
        mov [D1],al
        call mult 
        
        
        mov al,b.[Prod+1]
        mov [D1],al
        mov ax,[P0]
        mov [Prod],ax
        call mult
        
        mov ax,[P0]
        add b.[Prod+1],al
        
        
        loop Potencia
        ret    
    
    
;En el siguiente ejemplo hice la operacion que me indico el profesor en la correcion    
Dato1   db 0x3 ;Deben cambiarse
Dato2   db 0x0C
Prod    dw 0
D1      db 0x3 ;Estas deben cambiarse
D2      db 0x0C
P0      dw 0
    
;MENSAJES
m1:   db "Seccion D05"
m2:   db "Govea Ortiz Diego Leon"
m3:   db "Entradas -----> Dato1, Dato2"
m4:   db "Salidas  -----> Prod"
m5:   db "Variable de entrada 8 bits --> D1"
m6:   db "Variable de entrada 8 bits --> D2" 

;TAMANO DE LOS MENSAJES
mtamano:
tamsg1 = m2 - m1
tamsg2 = m3 - m2
tamsg3 = m4 - m3
tamsg4 = m5 - m4
tamsg5 = m6 - m5
tamsg6 = mtamano - m6
