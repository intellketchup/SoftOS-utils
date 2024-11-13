#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s origen destino\n", argv[0]);
        return 1;
    }

    FILE *src = fopen(argv[1], "rb");
    if (!src) {
        perror("Error al abrir el archivo origen");
        return 1;
    }

    FILE *dest = fopen(argv[2], "wb");
    if (!dest) {
        perror("Error al abrir el archivo destino");
        fclose(src);
        return 1;
    }

    char buffer[1024];
    size_t bytes;
    while ((bytes = fread(buffer, 1, sizeof(buffer), src)) > 0) {
        fwrite(buffer, 1, bytes, dest);
    }

    fclose(src);
    fclose(dest);
    return 0;
}
