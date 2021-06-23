import java.util.Scanner;

fun solve(reader: Scanner) {
    val a = reader.nextInt()
    val b = reader.nextInt();
    val c = a+b
    println(c)
}

fun main() {
    var t = 1
    val reader = Scanner(System.`in`)
    t = reader.nextInt()
    while(t-- > 0) {
        solve(reader);
    }

}