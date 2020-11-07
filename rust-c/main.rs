
#[link(name="identity")]
extern "C" {
    fn identity_int32_t(x: i32) -> i32;
    //fn identity_identity_test(x: identity_test) -> identity_test;
}

fn main() -> () {
    unsafe {
        std::process::exit(identity_int32_t(0));
    }
}
