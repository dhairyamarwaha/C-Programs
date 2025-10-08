import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        scanner.close();

        String result = characterReplacer(input);
        System.out.println(result);
    }

    public static String characterReplacer(String input) {
        StringBuilder output = new StringBuilder();
        char[] vowels = {'a', 'e', 'i', 'o', 'u'};

        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);


            if (Character.isUpperCase(ch)) {
                ch = Character.toLowerCase(ch);
            }


            if (isVowel(ch)) {
                output.append(ch);
            } else if (Character.isLetter(ch)) {
                // Find closest vowel
                int minDiff = Math.abs(ch - vowels[0]);
                char closestVowel = vowels[0];

                for (int j = 1; j < vowels.length; j++) {
                    int diff = Math.abs(ch - vowels[j]);
                    if (diff < minDiff || (diff == minDiff && vowels[j] < closestVowel)) {
                        minDiff = diff;
                        closestVowel = vowels[j];
                    }
                }

                output.append(closestVowel);
            } else {

                output.append(ch);
            }
        }

        return output.toString();
    }

    public static boolean isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
}
