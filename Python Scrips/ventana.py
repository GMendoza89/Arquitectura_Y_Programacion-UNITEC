# Py Games es un módulo para la creacion de juegoos 2D

import pygame as pyg

from pygame.locals import (
    K_UP,
    K_DOWN,
    K_ESCAPE,
    QUIT
)
class player:
    def __init__(self,l,colors):
        self.pose = [0,0]
        self.L = l
        self.points = [[self.pose[0] - self.L, self.pose[1]], #vertice 1 
                       [self.pose[0]+self.L,self.pose[1]],   #vertice 2
                       [self.pose[0],self.pose[1]-2*self.L]] #vertice 3
        self.color = colors
    def setPose(self,corrd):
        self.pose = corrd
        self.points = [[self.pose[0] - self.L, self.pose[1]], #vertice 1 
                       [self.pose[0]+self.L,self.pose[1]],   #vertice 2
                       [self.pose[0],self.pose[1]-2*self.L]] #vertice 3
    def printPlayer(self,screen):
        pyg.draw.polygon(screen, self.color, self.points, 0)
        
pOne = player(50,(0,255,0))

pOne.setPose([500,500])

pyg.init()

#crear una variable de ventana

screen = pyg.display.set_mode([1024,720])

R = 75
i = 75
incremento = True
incremento2 = True
running = True
j = 50  
while running:
    for event in pyg.event.get():
        if event.type == QUIT:
            running = False
        # elif event.type == pyg.MOUSEBUTTONDOWN:
        #     mouse = event.pos
        elif event.type == pyg.KEYDOWN:
            if event.key == K_ESCAPE:
                running = False

    
    screen.fill((255,255,255))
    pyg.draw.circle(screen, (255,0,0),(100,100),100)
    
    pyg.draw.rect(screen,(0,75,75),(100, 50, 100,50))
    pOne.printPlayer(screen)
    # if i == 1024 - R:
    #     incremento = False
    # elif i < R:
    #     incremento = True  
    # if incremento:
    #     i += 1
    # else:
    #     i -= 1
    # if j == 720 - 50:
    #     incremento2 = False
    # elif j == 1:
    #     incremento2 = True  
    # if incremento2:
    #     j += 1
    # else:
    #     j -= 1
    


    pyg.display.flip()

pyg.quit()