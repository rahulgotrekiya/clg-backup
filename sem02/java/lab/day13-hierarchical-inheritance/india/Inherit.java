public class Inherit {
    public static void main(String args[]) {
        Gujarat gj = new Gujarat();
        gj.showGujarat();
        gj.showIndia();

        Kerala kr = new Kerala();
        kr.showKerala();
        kr.showIndia();        
    }
}

class india {
    void showIndia() {
        System.out.println("India");
    }
}

class Gujarat extends india {
    void showGujarat() {
        System.out.println("Gujarat");
    }
}

class Kerala extends india {
    void showKerala() {
        System.out.println("Kerala");
    }
}