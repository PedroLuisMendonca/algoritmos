using System;
using System.Collections.Generic;
namespace C_
{
    class Program
    {
        static void Main(string[] args)
        {
            List<string> strList = new List<string>();
            strList.Add("Test");
            strList.Add("of");
            strList.Add("NetCore");

            foreach(var str in strList)
            {
                Console.WriteLine(str);
            }
        }
    }
}
