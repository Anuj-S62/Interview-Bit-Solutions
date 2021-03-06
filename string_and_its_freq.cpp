#include<bits/stdc++.h>
using namespace std;

void show(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

string change(int n){
    string res="";

    while(n){
       char x=(n%10)+48;
       res=res+x;
       n=n/10; 
    }
    reverse(res.begin(),res.end());
    return res;
}

string solve(string A) {
    vector<int> temp;
    for(int i=0;i<26;i++){
        temp.push_back(0);
    }
    for(int i=0;i<A.length();i++){
        int idx=A[i]-97;
        temp[idx]++;
    }
    vector<int> temp2=temp;
    vector<int> freq;
    string res="";
    for(int i=0;i<A.length();i++){
        int idx=A[i]-97;
        if(temp[idx]){
            res += A[i];
            res += change(temp[idx]);
        }
        temp[idx]=0;
    }
    return res;
}

int main(){
    solve("kbyyxoioalnhadcqqvszhledptqpnprgdyclayzwyynckvyffzeizbugnviixaukvwixvbpihbawjfpeatacqlwgiutndpugwgyejvghcynmmhavtciaycxckvddnmigvhamkgemotudubxhvaegadxjdmbepyhcpvbfsftvcrufzoklcgkevcyerlzrjgbcdyghacbglmwvguopmtkxcqpmyffbatklrfpoalpyypxlkabddevjdpgyhplpqygbdmoyonlvfzpnnfdngmhfnsqoyylyqevfghajtdmfrwremwnkenxlnnttuznghwntgwwzquyirxwvwlbyfektainxzeixsatlhoqvmlivligaryxzlfwkqzuiopxfmfzzzojjkiapkkomnvmyfpekenlpzfzrzoxviarvmiwhtlglvrhvlidnwyqtdfxofsffmbmivulobiaqvayzggvwpombxfqntrbdzutggknlszpwlnjweldzetkhfichysqhqoefbmlcjuflwyzdgubgonfjismcxilyeydmnixywbjumhqrnrcqktgmxzfzwwwcmbwzgiqjhlxjcckbjsfkjmityfwspzrrnjnkgmaunoaaoevtkyfbxwauadtbiytbwgrvujyrxcqykisvhetrfcpolzqdngxxkdvjrkicoyhrwltnzzmxvwirtvzmhfvsowhgvswkdvpiqhutoksmpwsyeaiamdgznmrzywdkmtejsahwxfsejmcrikwcxrbebwalygedkfqnnywftvclhverguuvzthdjadnkrqympwgcouxfdzjptxbmughrxdztvorpjhmnzocundesrnpdvurimwyetagonloltbbkkreibwndvxfbjyrtyfxvpsncqzelmyyyyivgpmwbfcldyskppdthnbmteeuxmfevvsozrhdcfotlsysnrcetbgzoynskkayndmwgebibwsmvqnaerlfidutxqmvfifvkuirsismttfptwhwbhhbneqvuvciqwmuauurjqxsemphogzwhebcrjkveuihdzocpizrhjfmnhsqowmwtusoenbuvcofmwbawuzurgfqvvkqmcflpisbvvyhhmeeqsenryxzhixeuqxzshsddhscecchqltjcciumubybcnncqcjsajovxzambcwqlbkvxsxtwfwvlppzeufqaepvgpkjzlrjdlavvbsbbxoxogosyequslwwqhhzplujewcauworabggcdmjuygrjvlmwccfpwfoxktzhscaebnkyyhptmekveadgdgbpfzvyqutjtslrtkagtlnyfsykhdnmdxadhauudjtaepelknianzsxgqvdjratpoadeyquzpgkpqdzvlaodbzyuglgubcfhptqjqmfgcvdyfpikebqqvmftioygbwjhjtlxlqamptasfyyjjpxdaiizmwryhcvlpiymqioqswldotikidrycdvhqfnfggltofgkztezeylfaifipkeunwdaldxdvdygnabpnvjikwzcsdlsjuyfryevtmatfajgvueugquwpoaxujfelqbvumlekevjezechinwpseerzlcsgtwiwpwwagqsbxooeapjjmpycrtjhtbqknpnifujjmklqmqpihvdryregovjspsejaukskovjpdzbhzmtpqmkerdzlsiyipqmbndcwhwzwlinscbjqwbqtdsnbsgamldcfkbdolirlymicwjquzyznpnldwwgoghjpfvpgnhxkainmzvhclzshhdsruwrydpdezlxshlqwdtwbkqivzfgdfwxyajczxkjrgljqfirzxdwfeosxwvhwuakzttflqlpymjpgnnogqljrjxpldseaycnrjuebeskxwdkjvmyrctbygtcxtbofzorubpivleebtjrpgmyopxdmhljosvznzedukdzwmbxenjsqadojpwnzbzrosfevtdfdnlpqfbyrgmsorguffliusanxwwsqrurmbwzwcjsczbdxutnroumztdepudpoltzrldvcmuafudzlqliknnvzlvbyaegvjswnaictohwrzungqoocgufcynlvldyiqlmamabwoltvtlncriqvrfvwzgyufglsidjxihuaudncqxsxsqqmsichnwjahqntqnseooediinvojfpprsvvrsqazhiwmylnijnoitumfjyhytttonrkkrucghociycvdlwlbulkaqngfcpvjehbubbuejyzjhwyoqghmkimdhftdzczkgtublvmpaohrfjwwwohzwfdgfuenileggvgqsfvcoksqpdhgngmfxxwrmonloftrbcwkzxmavmjewqnyshsggwhogkxwrhkhvajrftyoowtxoyobkuewzzqbopnaryaadjgmtmztlbemggozjsmspfxtlnmtlkvxradqsokiiuwiooylwojtpehwnibpmzppvvcmjgihuqpcozhfrzqgnjyscgbcwvnrnkfpkcwwxnsrwlhtmtkqcgdenoeyfmwmjjutfmhofmopvbivctrlpuxncadtewbuacbjabqugdfgdeemgxoqqnifveotacamqtvwyyykafxxamjomlrwxnixmhqyyojjwnqkvtmkcekwdkfrhhzlvkqhtuixupbdzruxvhgezzdtorajwrprpptkpmrjxwmfsntttvmqstnebkcpmnwdrltdeqxynyaotajkyqetkaltqdknmvczzkkswesowohaekwrmiikpudkrlmednfymjsvlbfgathhhndyuumaysxjknubhxwdqsrdagcpmmqqiysvjietkdlxtpnfozuilexmtlzffcaewyutebuezgjwcxadlyxmllkqwzdvthxtfqctwthgqnfczcpbiswjabrgmfcvbblsmplstodmmiaxagkiesvpwhbfqhppgvfyzmdvnqnjngqmycobhtinibzqsicvellpzcztoxvwkanbuwjjyubjtejecyefzwcyecycqdcvsjfiotiiiyebiwqcayiajqgdkbvsnxvwuhhbodqggjxemxyqxzktizrknpixirdikugqxjzkcxbruyvbiwagonrwyobjvqbacidcqpzcwvfbodecuicnbfxutdfltskemsrtephbafryfggqdobgwceksictctyvszzbxuzoszqjakklfqqccrhucjovarmjotqxhykteudpqfcqkxunxittlgpcmlyheskolxbgwvxfmktgcnujyscqaatlnlhmjtlvbrmlpyeltowcflzogrpfqpdgxtwuvuqocvkatkitvffucijfwiuvgimtmzhnjfupjveesytnwptkblftgsyqxsrfaqboujybksnujahyvmfxfehedpujxycevxdwhqepqccnwrflwmsuyxfdphdykdjbtddmztxuutpqnlophgwupgxrinlaoegksungozfatokvkmvlvbmdaymkwljetgreqippevcfbpnuadnjwsuxutzooyuwpwpnbdoamzpxtdmvxexjfyqivaozklciqrerboyfdqvfmndjlpgmjwvgaffrrnclfebtbiasvuajboesazkujmedfiaokkzextemmipvyzjrfogytsxzyzbvauvfqjylmzsezxzekgdddvjaeesryfsqeyoplrmhmmuvsdcvtoopbstgstmpvospbqybbeaqfaultnserfjfdkatrciipghozazmbprkbjoebolnphsotczsjtnmgftlscewjdfvknuajcxyzazjqlyhxjtbnqawpaaicascsgisvpobmyhrfxnwbpdufsqufwjhnwlemmbgtfzvqpilymzvznrjlmjfbkklxrdlovjjcrqicvhxuzheyvbipnqwqmnzjaqcktxrsbkifjwopajngienvkqwzytoydiaobbanzrclpmodrfozukjgtygfuwwezqcpolvaciwepdhrfhyxodopbjdnxtiudfkrdjpkjhscbengpztidkebdnfqbbuvlrvogocscrpihhotzfekyhwsdcbftzqbgyuosnqtufhwxfumiwwyudicgtoyotzvpcznxqwtpgvkoyihbsrmiekipiuoxhfjcwgvwepmacgclocfuyelsnbkzukeerzhtnrnwytufguuietcooxvojwgxxdxzpttosrjdmqipwcqptndiahxpmfwhhihfknewxocerqqdvyywmgabzfwfquqhcjuwawkbenjjvlqyrqkrplwzbzepzejniateotkbhihojaxmwepchoijogvmrnwqsldkqowioxwdyunybynfjlarmnakzduvfyfnymtseoqahxweiydmypcxhcolkruqjalgjlecvsroffybpsrjlogwsieqcoegufcyeexyznojfoeilmqvatelwfjrpmnvmlnifikkdagvtarjenxawqfgattkknulkggxiaumyopdrjqhnisytgibhcyaruczrnblqpqzjwbhrqnvgtrgsflngghhczszgyzpcaaalvscmdeqchlkuaaotrgkzljyqziischpgibgzobjpzbnmtfrukgkxeyugjtwrqwoyacwsrkcpyzzmqrtivcqyydhihpznigqsylbzowjrernmnsyhdvznciceuimjhpucjolwjauvaferkcxmrvejuazvmunatimolukgfxmyngxnsevemzorogohsfsywwkvwnipzywzectjlftnqtwkhajdvqcqzsikddutndylsgcuehotbdskorrnhkkkzyywczlyqnmrhcpihokdocthorsbiczxcstdbyyalgjfpbqqusxwbfvsaeeoeconwbnjrblxoaddpqrgbueaadlflneurgrdbvttoqxrympdyfmzufwqhaocmfdiwhyaiwbwvhupvhvwzkdmdoqwtrkibcwsvjvmudhqoywucyaylqhpmlgswbpwycljglqupeejqrampqmzvkyudbawnjvpxxdnjylocltfypvfneqojvzadmxxzfcjenijnnwwyjpwntjwaiwmcjaqppxcjgepbooylpiqjyjbycsnviwusmtwaempyvhvsvmtllgniukzdgtqoldfctpizmonudiatiexprpdwshxsxktcpubgartukwgaqdikkdeigjjzhegutlxertfqepgsdxvpbnjkdfjmyyipckiuxtippnehskitmycrqeximoanxrhewfccvhyufaxfswlfyhqytvpevqbdvuqmxvtruuuihctgjxpagdpzbipnsopqfydsvmmlmzfatkyjaopgvqqnyqtjpwtatlbymkeexdjvemyuybuhkpjymirqolaflktsskppfcvwhjgmdklhdcktldtniwjrfzxdhkjrqybydntdexozvuhbyimaahpdmzlzghnxvymghtozpnlpoxeqyouvvwnjnvuwtzmbjysvjhvxhezlnlnhtalhkebtjqrlyvxagmitjfgrtirabuxzpdtkubumvqaxmqencrjjcaszqfkvqwjxfkbvdqkeuozomfqeqfldwsuniuipvcwbcskmkobendaeeqeqrqvtkajjawkqkfhtudplksngjciuzcguegosrcokjsxcnjlsxaudobapaxdmgboduahjyvtdmkddfhjmyekyqzcinepzghhqtxndjhnqunzfgeqarrvysbimjrbzaavjyolddvjfbxxkxqxfdeicwslxxnizydhrczkbblqoeijqwoumklufqotbuaqngqmnykvqmgojqswegjpmbghivglbarajowqikoqnefgmgalwzozmvgibzthlljcgprvmcxmmhzaxmbfnopxskmwnxsqdnzhpzwibhvjbspzlfccxfigajvrtnmblfjmvouhsvagbcljjxumaihfmjkyqsmthgadbltwraklrlqwapgsmqfktujcevjwpkymgpwmgyfghiqdlbiiiffbsaoerxadvoisgnldfbswnzkecrenhznyokovpmjouqffniwyimhepcexrlkpxbrfcjsufjvxvkqvqsfczzfvmcnkehfvvqxxaihlzstzjsdndiemhzjgbsnejmaakisyidaosbjzxsrecvjyrgrapqakzahfjhrewvbvvboigqiqavkwkktvfgzyrnketmzhzbjrbpxbzyimufyoczehrekzyofmibvlsacqjjjsjonetymrjxptnpqxhtjszxmltuarytgnixnyujugsgybpifrwsbyoozliywcesfulrgvhqyqzrncuqnpsmqnppaznxmolobamdyogpsubdrhwnyrvcicoxsimridlcrraelprnhwmgnhbymvdgxiduwwrdbpevcunsfdanfskooxlahmrxhberwxdjgsmnnirnvbarkpsnaxpadirtpnbaulvvmwzccwfwvzjuslzyhclewfgzgqqzlbuhqwapayllieguejvapwmujcpcjdzoenfrcfbhnauedknipokkzerzfkilzugxvbfkiqdmgskdikcucevzsszzwhvtilhwusehdhulpnsvvluoyeijnacpokmrmyabewqxmoxftjqrbcawotnzhiwwuqsjroiwmakqdqtxcxseiiftwnxizxmtqmqhzxoyabckhipdqrrvepeoxpnwljcgwirpcyaargamzypoyzzooizvnpahtweyhgffcypwnleyjbxkkkxlzphwgbfubwktpomcckfqiyzaavirhgylhwtsneoubfeifkdbxmdgqaplpwazteavncifvaysazdeilueykdxjtqyqvuskiftwouhnovjnlxiivhykaizypnkqzxjxoiwmrvejvtjygwsoogapzqhttewieewompyxuleermnbgznxzynylhwbvremrkappflrdvgfnuqnnlyyvvrlxavsvriqdjbkrzwpunmeuzlnefmmwocuthotblk");
    return 0;
}

