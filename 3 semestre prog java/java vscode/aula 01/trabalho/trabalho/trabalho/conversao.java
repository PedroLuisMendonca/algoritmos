package trabalho;
public class conversao{
    public static double polegadasEmCentimetros(int polegadas){
        double resultado = (polegadas * 2.54);
        return resultado;
    }
    public static double pesParaCentimetros(int pes){
        double resultado = (pes * 30.48);
        return resultado;
    }
    public static double milhasParaQuilometros(int milhas){
        double resultado = (milhas * 1.609);
        return resultado;
    }
}