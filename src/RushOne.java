package com.wilhelm.prisacaru_konsza;

public class RushOne {
    public static void main(String[] args) {
//        int[] clues = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
//
//        int[][] board = boardConstruct(clues);
//
//        System.out.println();
//        for (int i = 0; i < board.length; i++) {
//            for (int j = 0; j < board[0].length; j++) {
//                System.out.print(board[i][j]);
//            }
//            System.out.println();
//        }
//        System.out.println();
//        solve(board);
//
//        char[] charArray = {'h', 'i', ' ', ' ', 'c', 'A', 'S', 'E', '.', 'C', 'U', 'T', 't', '!'};
//        int i = 0;
//
//        charArray = ft_strcapitalize(charArray);
//        while (i < charArray.length) {
//            System.out.print(charArray[i]);
//            i++;
        //       }

        int num = 3;
        int pow = 4;
        int counter = 0;

        pow--;
        while (pow != 0) {
            System.out.println("Pow = " + pow);
            System.out.println(num);
            num *= num;
            pow--;
        }

    }


    static char[] ft_strcapitalize(char[] str) {
        int i;

        i = 0;
        while (i < str.length) {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
            i++;
        }
        i = 0;
        while (i++ < str.length) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                if (i > 0 && str[i - 1] >= 'a' && str[i - 1] <= 'z') {
                    continue;
                } else if (i > 0 && str[i - 1] >= '0' && str[i - 1] <= '9') {
                    continue;
                } else if (i > 0 && (str[i - 1] >= 'A' && str[i - 1] <= 'Z')) {
                    continue;
                } else {
                    str[i] -= 32;
                    continue;

                }

            }

        }
        return str;

    }


    public static int[][] boardConstruct(int clues[]) {

        int x = 6;
        int y = 6;
        int[][] board = new int[x][y];
        int c1 = 0;
        int c2 = 4;
        int c3 = 8;
        int c4 = 12;
        System.out.println("Inside place clues function: " + "\n");
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                board[i][j] = 0;
                if ((j > 0 && j < y - 1) && i == 0) {
                    board[i][j] = clues[c1++];
                } else if ((j > 0 && j < y - 1) && i == x - 1) {
                    board[i][j] = clues[c2++];
                } else if (j == 0 && (i > 0 && i < x - 1)) {
                    board[i][j] = clues[c3++];
                } else if (j == y - 1 && (i > 0 && i < x - 1)) {
                    board[i][j] = clues[c4++];
                }
                System.out.print(board[i][j]);
            }
            System.out.println();
        }


        return placeBuildings(board);
    }

    //new approach start
    public static boolean isInRow(int[][] board, int row, int number) {
        int i = 1;
        while (i < 5) {
            if (board[row][i] == number)
                return true;
            i++;
        }
        return false;
    }

    public static boolean isInCol(int[][] board, int col, int number) {
        int i = 1;
        while (i < 5) {
            if (board[i][col] == number)
                return true;
            i++;
        }
        return false;
    }

    public static boolean isOk(int[][] board, int row, int col, int number) {
        return !isInRow(board, row, number) && !isInCol(board, col, number);
        //only true if both conditions are false
    }

    public static boolean solve(int[][] board) {
        int row = 1;
        int col = 1;
        int number = 1;
        while (row < 5) {
            while (col < 5) {
                //looking for unpopulated cell
                if (board[row][col] == 0) {
                    //trying possible values
                    while (number < 5) {
                        if (isOk(board, row, col, number)) {
                            //number should be ok if it's not repeated in rows / columns
                            board[row][col] = number;

                            //start of backtracking recursively
                            if (solve(board)) {
                                return true;
                            } else {
                                //if not solution we reset the value to 0
                                board[row][col] = 0;
                            }
                        }
                        number++;
                    }
                    return false;
                }
                col++;
            }
            col = 1;
            row++;
        }

        System.out.println("Inside solve function: " + "\n");
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[0].length; j++) {
                System.out.print(board[i][j]);
            }
            System.out.println();
        }

        return true; //should be solved without looking at clues
    }


    //new approach end


    public static int[][] placeBuildings(int[][] board) {
        int counter = 1;
        int counterFour = 1;
        System.out.println("Inside place buildings");

        while (counter < board.length) {
            while (counterFour < 5) {
                if (board[0][counter] == 1) {
                    board[1][counter] = 4;
                }
                if (board[counter][5] == 1) {
                    board[counter][4] = 4;
                }
                if (board[5][counter] == 1) {
                    board[4][counter] = 4;
                }
                if (board[counter][0] == 1) {
                    board[counter][1] = 4;
                }
                if (board[0][counter] == 4) {
                    board[counterFour][counter] = counterFour;
                }
                if (board[counter][5] == 4) {
                    board[counter][counterFour] = counterFour;
                }
                if (board[5][counter] == 4) {
                    board[counterFour][counter] = counterFour;
                }
                if (board[counter][0] == 4) {
                    board[counter][counterFour] = counterFour;
                }
                counterFour++;
            }
            counterFour = 1;
            counter++;
        }
        return board;
    }


}

