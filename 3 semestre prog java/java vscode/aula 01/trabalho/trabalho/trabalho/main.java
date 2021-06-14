package trabalho;

import java.util.Scanner;

public class main {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int op = 1;
        while(op!=4){
            System.out.println("Menu de Opções:\n1.Polegadas para centímetros.\n2.Pés para centímetros.\n3.Milhas para quilometros.\n4.Sair\n");
            op = Integer.parseInt(input.nextLine());
            switch(op){
                case 1:
                    System.out.println("Digite a distância em polegadas para converter em centímetros: ");
                    int polegadas = Integer.parseInt(input.nextLine());
                    System.out.println("A distância em centímetros é: " + conversao.polegadasEmCentimetros(polegadas));
                break;
                case 2:
                    System.out.println("Digite a distância em pés para converter em centímetros: ");
                    int pes = Integer.parseInt(input.nextLine());
                    System.out.println("A distância em centímetros é: " + conversao.pesParaCentimetros(pes));
                break;
                case 3:
                    System.out.println("Digite a distância em milhas para converter em quilometros: ");
                    int milhas = Integer.parseInt(input.nextLine());
                    System.out.println("A distância em quilometros é: " + conversao.milhasParaQuilometros(milhas));
                break;
                case 4:
                    System.out.println("Fechando programa.");
                break;
                default:
                    System.out.println("Opção incorreta.");
                break;
            }
        }
    }
}