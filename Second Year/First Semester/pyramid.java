class Pyramid {
    public static void main(String[] args) {
        char space = ' ';
        char shade = '*';
        int height = 20;

        for (int i = 0;  i < height; i++) {
            for (int j = 0;  j < height - i; j++) {
                System.out.print(space);
            };
            for (int j = 0;  j < i; j++) {
                System.out.print(shade);
            };
            for (int j = 0;  j < i-1; j++) {
                System.out.print(shade);
            };
            for (int j = 0;  j < height - i; j++) {
                System.out.print(space);
            };
            System.out.print('\n');
        };
    };
};