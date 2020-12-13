class Test {
  public static void main(String[] args) {
    String message = "Привет, κόσμος!\n";
    if (message.charAt(0) != 0x41F) throw new RuntimeException();
    System.out.print(message);
  }
}
