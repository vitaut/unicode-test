fn main() {
  if "Привет, κόσμος!".chars().nth(0).unwrap() as u32 != 0x41F {
    panic!();
  }
  println!("Привет, κόσμος!");
}
