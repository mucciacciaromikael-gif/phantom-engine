- [x] ~~Creer ADR-0002~~:  
    *Les sturctures fondamentales du moteur sont créées via des fonctions de création (`*create()`) plutôt que d'être initialisées champ par champ.*

- [ ] Verifier que `pixel.h` compile tout seul.  
    Il devrait simplement dependre de `color.h`  
   
- [ ] Modifier le `framebuffer`.  
    Il devrait ressembler a ca:  
    ```c
    static Pixel framebuffer[HEIGHT][WIDTH];
    ```

- [ ] Corriger les erreurs **une par une**.  
    1. `renderer_clear()`  
    2. `renderer_set_pixel()`  
    3. `renderer_draw()`  

- [ ] Modifier `renderer.c`  
    Il ne devrait pas manipuler les champs de `Pixel` partout.  
    Creer une fonction utilitaire dans `pixel.h` :  
    ```c
    Pixel pixel_create(
        char glyph,
        Color foreground,
        Color background,
    );
    ```