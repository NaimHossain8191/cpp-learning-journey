[[maybe_unused]] static int add(int a, int b){ // static makes it unusable in other files
    return a + b;
}

[[maybe_unused]] int addition(int a, int b){ // no static used, so it's usable in other files
    return a + b;
}