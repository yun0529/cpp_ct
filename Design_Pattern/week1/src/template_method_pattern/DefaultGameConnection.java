package template_method_pattern;

public class DefaultGameConnection extends AbstGameConnectHelper{
    @Override
    protected String doSecurity(String string) {
        //System.out.println("디코드");
        System.out.println("강화된 알고리즘을 이용한 디코드");
        return string;
    }

    @Override
    protected boolean authentication(String id, String password) {
        System.out.println("아이디/암호 확인 과정");
        return true;
    }

    @Override
    protected int authorization(String userName) {
        System.out.println("권한 확인");
        // 서버에서 유저이름으로 유저의 나이를 알 수 있다.
        // 나이를 확인하고 지금 시간이 10시가 지났는데 성인이 아니라면
        // 권한이 없다고 한다.
        return -1;
    }

    @Override
    protected String connection(String info) {
        System.out.println("마지박 접속단계!");
        return info;
    }
}
