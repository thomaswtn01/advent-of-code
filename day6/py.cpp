#include <iostream>
#include <string>

int main()
{
    std::string text = "czfztznzpnpqpfftcftcchfhjjsqsvvffhwfhhqnhqqmlldpdcdnnfvvmpmzpmmrsrwssqbsbsmmdjdssfqfllclcdczdccppvzvtzznpnfpnnljnnpcphpjprrdhddsgdssbqqghqqmgqgccjffdtdcdmdjdcctltdddvhdhfhnnrffwjfjpjnpnpddhbbrrflrldlqlrlqqwssqsrswrrrmcmrcrfrwfwpfpdfppslsjsjhhjjqhqwwzzhttcvvzrrrnlrlmljlrjrsshwwndnnzwzpzcpcllfrrsjsnjncjcvcllrhrbhhdsdqdpqpffmppdzztggvpvnvwvpvdvqddznzrzppznnpnhhwjjrpjpvvqvpvrvfvjvzjvzjzqzlqqwsqqrsrprqpqmmbhbffbnnlzzhszhznnhzhmzzfhflfccvvbnbtnnlcnndjjcvjjshhssfjfcjjpzpqpmmdqmqmmbbldlwwvdwvddznncwcqwcwdwbdwwgzzzqvqqlqlttbppgtptlldldblbbjcbcttbpbvvhlhggghvvqsshjhjjzqzwwcggsfgsgjjgbjgbbgllhhmqmggmsggzszvvzggdngnznlzlrlprpjpgjgvgppfhhbqqcddvvbhbqqmlmsssbbszzfdzzznssjllwlplttdgtdttsmspmpvpgpspqpdqdppfvpvvmggrwwgswswmmmnppmttqppvttrvrllcmctcqqlvvpwwghhlmhmwhmmpfmfvfwwbgbqqdbqblqqclljcljccnhhghbgbrrnrppchhmpmdmfmvffvqqtnqqfccgcfgcgwgcwggvgzvvbwbgbjbwbcbgbzztbbsbdbvddzrdrjjlqqlslrssjddhbddzbzvbvhhrjhhrtrltljljwljjrnjjjlpjphjphjhjvjgjbbwfwcctgtmtmdttjhthphhchfcfnnqlqhqvvjcclczlzwlzlhzlzdlzlbzbvbmbcmcjcncwncntndtntbbgqqbrbsrssrnnrcrmrlmmrqqddhzdhhnqqvccbmbpbwpbwbrwwwgdgnnhzzhphbhwhwzwhhvhqqnmqnmnjmnjjjjztzvzvbzbbvcvggcdchhhhbfbttmmtsmsgmmqvqdvdrvrqrdqqrhqqpsqqfnntsnnslsggcqqrnrmrfffmgmsmgggrdgdrgddzfzqfqfcqfcfrfwrrrgglwlmlmlgmlmrlljzlzglzztllgnndhdthtwwdrrjnncssdsnszsggdhdpprnnqzzltzlzznlzlflgfgbfggqtggfbbccchdcdrrnwnbnhbnbjjpzjpzzwjwcwggfqfccdzzfddmbddgbgrgllnttrwrjwrrbsrsbbwqwmmlggzqgzqzrqzzffmcmssgjjjcdcssndsdfsfddcffbrrcvccwhhzzlglhhsccvdvjjdldndrrvlrrbwrrbqqcbcjcjpjggngvnndtdvttlrlmmcbcggbtbhthjttdggtvtmmlgmlgmmdwdndmmldlttjlmbtrwfnvmnzggqfqwnppbrnjmpjfppwltpqfstgnnjwmbffgfbjmfhqngnswftgrqvpljsmghszclhhprscrgtmsgbwnbrfhwdsbjrdlhdcqfthwfggpzhjrvmprcjjgrlbmdqczmsltnpnlpldvnsjbdjzbrglpsmbwdhhphcdmjqmssdlgjtmphhjvpjqcdvmdtszldnjtbcffhwrbqpsrsmmsqsbbrnhsrvfhhcmwgcpsfhrfcpvldrwstqtgrcgrqttvdnstlbdblnbtcgdgpbcjdlvwpplsslqdsbpncbwzcmlglbhnrtbwvnbfsgrdlpzszhzmzqtztzgjjjszmjgggdnslqqqrrlwcghpvzwpndbjbhhhpbbtvjvjvjhntqggtmqwdnrtswcchsqpdwnvmfqrgpvbtjpttfhmlgtnsgnpcrhbswfblwrbflqlgtmvzvwprtfntshjcpzshnlnqthvqgpzffsbdbvbhpghwjhqpjwjfbsrzgttsnrpmfrvlwrjrfplrtzpntjbvhdjjfjjzrrvrsrctrtldrsgcgvntgvmtrnqbtmpzvlbwnddbnldbhfcpncqclzqgmbjcnnfdfsmdjdgtmtzbpwqrhrlggrfjhvrrqpjptqdzpwffwnfwmfhfhmcpljmhttbltgltqjhtvbdzgwrppzjwhctnncqthnlrhzgtnffpwnnqqgddjtgtczfmwvbccgvmdfvggdghmssjlflptzrpdncbjcsdlbqjfzmnzdggwdczghfpldsbnvzdjzsbsdnmwptgngmnbqmwbrzqgnqbmfvbzzmsvlswbtvfllqzsjdlvzjmbmlbnljwwjsqzqvfwhzmfdgttfqsdttnjmvspsgvpzwczpvdbvhjjrttghjddrgffqdsmzspnssztjjmwtsrtlrmbqhfbvpzsmnqthssbqrjhvqllrbbpjjllszmnjvzmfsbjtvvvgzrvjwldlbzjdbrsvvgmmjrgsbvtvthjbcqlzqhjqfvbzzvlpmrlmphftwbsvvwnwqfwvsnlvlcdgqjspprmwptcjhbjplzrqlhmvzmbfvwwvgvtqlvgfvzqdprfcjqsnndwqmbhlvfvhdhghtsrhbcrrshlsdtlbwntbcvvjhlcscfcnhbdnngtsccrnfbbqbfggvwnmlfhmqbdqpnzvzcvngcctbrshsdvhstcnwvjgwchzdndgbgjnddrmfgftvvjtdnqhfjmpjcjjtmgztvnwnrjjgmcgcqclnwvclngrtjggrprmfpqcsmdtbswhwrgwgfflqldtpnfdhdltrnhdvqqdsshcrnncdpvbhvlcbjlznjjzsdcjjpqprnzpmvqvrfnhdvhgrsmlcgtbsmrgqqtmblqmqcnmnmbcmmjvnptzbbqmcpwbflhccpfrjvfzmcsttfjtjgrnjbtwbncrsjjgjwdpmvfpqmzqwgjvgvfnpbhgzlzhfsnwmjjjsgcjjcwcfbzrmfzwdmhffqnzscbnfmpnbdbccrsjgqgvftszdbqbstwtwmwfzbtmvdmwvshlcpqnsqfwqlfclmjdjvgszsdblwvnhtwtrjcwsmpgflhdqmndrjvqlhqclmwhscnznmhjtqjlnglpbmgvptjnrpnjlqslssfnbdwlrwrdrtfspsjwzvwzfjpflqgmfnbvzqglrrccsnqtchnhlnrwlwqmqdvwsjmbjbvczvqcgfrrtftcgqsnvzhjlshnlvqmvrjljpsvmdzwqgltmccnplbmplhpvvflhmgfzmhczpwffbzhzhhggzgwtpmlzgrbpfgcnmfdbgcwrbgdpzpwmtwgmjtpmqzzgclmcpjgzdrwqfdwqzzqszrwmbwcqzcjdphqtwlbqmnddsdthgjrlshhmzgrqlhghrbqgzppqbdmmlnthhhmtdcdnbqfvbwdrdgbbpbhtrflwmhwjmzdtwmzhjndbrvbtbqnzbsrrbfdrrdnjltdtsjnpddmqzzbzblzvwctpdhfqgqntczwlgqbvvmhjblztlpptqjscztlrvrglrbsbfdjdfbwjltjcdgmqzgtjqjfgjnnpqgfhsrcggrszhbgfhtjmlgmmvshcpjwmcwcvwhnbjzrzfwtnlsnmdgfpbhvgfrhmhmsmtrnblsmnjclqzfgttrdmvpsvlcvnhmgmltfhffzllfrmdqdpzdmjdmsnmpwbwvrdvwvrcdsfwftfbfvmzjttrqgqlqqdtmcpdpfqfsclcmcdzhjwqrbhmzjjsvpbjzzgfwbjbqmzmtrnflwrqgnbgqnpntqmlngmgcrflgvhpznvrfwzlwrswbdsldfdbhvwvcbwhmpcslhmmbjdzvmgrjwzqqzlrrgddpssqcshzrsvrrzzcbsgvfmrlcgjrcpphctdwtjbmrlnrmrbgsqbjnmnsbjfhszcgdqfflcwvrvnwtvcnhcffvphwmzqpwnwncrbnzrnvjzsrnlzlfdbgztrhvlvpczzqnwsvwvnhgnclhndjsgqdgznjzrtmslmgnjzpj";
    std::string ad = "";
    int i = 0;
    int status = 0;
    int deb = 1;
    while (i != text.length())
    {
        if (ad.length() == 14)
            break;
        status = 0;

        for (int j = 0; ad[j] != '\0'; j++)
        {
            if (ad[j] == text[i])
                status = 1;
        }
        if (status == 0)
            ad += text[i];
        else
        {
            ad = text[deb];
            i = deb;
            deb += 1;
        }
        i++;
    }
    std::cout << ad << " id: " << i << std::endl;
}