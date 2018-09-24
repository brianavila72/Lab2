


class FibonacciExample1{
    public static void main(String args[])
    {
        byte nb1=0,nb2=1,nb3,ib,countb=13;
        System.out.println("Entero tipo byte: ");
        System.out.print(nb1+" "+nb2);//printing 0 and 1

        for(ib=2;ib<countb;++ib)//loop starts from 2 because 0 and 1 are already printed
        {
            nb3=(byte) (nb1+nb2);
            System.out.print(" "+nb3);
            nb1=nb2;
            nb2=nb3;
        }
        System.out.println(" ");
        System.out.println("Overflow para n = "+countb);
        System.out.println(" ");


        short ns1=0,ns2=1,ns3,is,counts=25;
        System.out.println("Entero tipo short: ");
        System.out.print(ns1+" "+ns2);//printing 0 and 1

        for(is=2;is<counts;++is)//loop starts from 2 because 0 and 1 are already printed
        {
            ns3= (short) (ns1+ns2);
            System.out.print(" "+ns3);
            ns1=ns2;
            ns2=ns3;
        }
        System.out.println(" ");
        System.out.println("Overflow para n = "+counts);
        System.out.println(" ");


        int n1=0,n2=1,n3,i,count=48;
        System.out.println("Entero tipo int: ");
        System.out.print(n1+" "+n2);//printing 0 and 1

        for(i=2;i<count;++i)//loop starts from 2 because 0 and 1 are already printed
        {
            n3=n1+n2;
            System.out.print(" "+n3);
            n1=n2;
            n2=n3;
        }
        System.out.println(" ");
        System.out.println("Overflow para n = "+count);
        System.out.println(" ");


        long nl1=0,nl2=1,nl3,il,countl=94;
        System.out.println("Entero tipo long: ");
        System.out.print(nl1+" "+nl2);//printing 0 and 1

        for(il=2;il<countl;++il)//loop starts from 2 because 0 and 1 are already printed
        {
            nl3=nl1+nl2;
            System.out.print(" "+nl3);
            nl1=nl2;
            nl2=nl3;
        }
        System.out.println(" ");
        System.out.println("Overflow para n = "+countl);


    }}


