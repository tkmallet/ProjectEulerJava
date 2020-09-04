import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

public class PE_13
{
    public static void main(String args[]) throws IOException
    {
        BigInteger myBig = new BigInteger("0");
        BigInteger total = new BigInteger("0");
        File line = new File("src/PE_13.txt");
        Scanner read = new Scanner(line);

        try
        {
            while (read.hasNextBigInteger())
            {
                myBig = (read.nextBigInteger());
                total = total.add(myBig);
            }
            System.out.println(total);
        }
        catch(Exception e)
        {
            System.out.println(e.getClass());
        }
        finally
        {
            read.close();
        }
    }


}
