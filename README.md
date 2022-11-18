
# Quản lí sinh viên trong quá trình tham gia các hoạt động của CLB ITMC

Viết chương trình quản lí và thực hiện điểm danh các sinh viên tham gia các hoạt động của CLB ITMC. Mỗi sinh viên trước khi tham gia hoạt động sẽ được Check in để điểm danh và sau khi kết thúc buổi sinh hoạt chung với CLB sẽ thực hiện check out để xác định sinh viên có tham gia hết buổi sinh hoạt hay không.

### Danh sách sinh viên

Danh sách các sinh viên với mỗi **Sinh viên** có các thông tin sau:

- Mã số sinh viên.
- Họ và tên (Chuỗi kí tự không quá $256$ kí tự).
- Mã lớp.
- Số điện thoại (Số nguyên không quá $10$ chữ số).
- Ngày tham gia CLB (Theo định dạng DD/MM/YYYY).

Mã số sinh viên sẽ có cấu trúc sau:

$$\text{N}/\text{B} + \text{Khóa nhập học} + \text{Mã ngành học} + \text{Số thứ tự sinh viên}$$

Trong đó:

- $\text{N}/\text{B}$: tương ứng với sinh viên ở học viện cơ sở miền Nam hoặc miền Bắc.
- $\text{Khóa nhập học}$: là hai số sau của năm sinh viên nhập học. Ví dụ sinh viên nhập học năm $2021$ sẽ có $\text{Khóa nhập học}$ là $21$.
- $\text{Mã ngành học}$: là mã ngành học tương ứng của sinh viên. Danh sách các mã ngành học của Học viện Cơ sở như sau:

    - $\text{DCCN}$: tương ứng với ngành công nghệ thông tin.
    - $\text{DCPT}$: tương ứng với ngành công nghệ đa phương tiện.
    - $\text{DCMR}$: tương ứng với ngành marketing.
    - $\text{DCVT}$: tương ứng với ngành viễn thông.
    - $\text{DCDT}$: tương ứng với ngành điện tử.
    - $\text{DCKT}$: tương ứng với ngành kế toán.

- $\text{Số thứ tự sinh viên}$: là số thứ tự của sinh viên trong cùng một ngành được sắp xếp theo họ và tên của sinh viên.

Ví dụ với hai sinh viên cùng học ngành công nghệ thông tin tại Học viện Cơ sở có tên Nguyễn Văn A và Nguyễn Văn B năm $2021$ thì sẽ có mã số sinh viên tương ứng là: $\text{N21DCCN001}$ và $\text{N21DCCN002}$.

Mã lớp sẽ có cấu trúc như sau:

$$\text{D} + \text{Khóa nhập học} + \text{Mã ngành} + \text{Số thứ tự lớp} + "-" + \text{N}/\text{B}$$

Trong đó:

- $\text{D}$: là kí tự cố định.
- $\text{Khóa nhập học}$: là năm sinh viên bắt đầu nhập học tại Học viện.
- $\text{Mã ngành}$: là mã của ngành sinh viên đang theo học được quy định theo danh sách sau:

    - $\text{CQCN}$: Công nghệ thông tin.
    - $\text{CQPT}$: Công nghệ đa phương tiện.
    - $\text{CQMR}$: Marketing.
    - $\text{CQVT}$: Viễn thông.
    - $\text{CQDT}$: Điện tử.
    - $\text{CQKT}$: Kế toán.

- $\text{Số thứ tự lớp}$: Mỗi ngành có thể có nhiều lớp, đây là số thứ tự để phân biệt các lớp trong cùng ngành, bắt đầu đánh số từ $1$.
- $\text{N}/\text{B}$: Kí hiệu phân biệt cơ sở Học viện ở miền Nam hoặc miền Bắc.

### Danh sách buổi sinh hoạt

Danh sách các buổi sinh hoạt với mỗi **Buổi sinh hoạt** sẽ có các thông tin sau:

- ID của buổi sinh hoạt (*mỗi buổi sinh hoạt sẽ có một ID duy nhất*). 
- Ngày diễn ra buổi sinh hoạt (*Định dạng ngày/tháng/năm: DD/MM/YYYY*).
- Thời gian diễn ra buổi sinh hoạt (Định dạng giờ/phút/giây).
- Chủ đề của buổi sinh hoạt (Chuỗi kiểu `string` không quá $256$ kí tự).
- Danh sách sinh viên tham gia buổi sinh hoạt (*được sử dụng để sinh viên check-in và check-out mỗi khi tham gia hoạt động*).

ID của buổi sinh hoạt sẽ có cấu trúc như sau:

$$DD + MM + YYYY + XXXXX$$

Trong đó:

- $DD$ là ngày diễn ra buổi sinh hoạt.
- $MM$ là tháng diễn ra buổi sinh hoạt.
- $YYYY$ là năm diễn ra buổi sinh hoạt.
- $XXXXX$ là số thứ tự của buổi sinh hoạt trong ngày.

Ví dụ ngày $21/12/2022$ diễn ra 3 buổi sinh hoạt thì theo thứ tự diễn ra (*buổi sinh hoạt diễn ra sớm hơn sẽ có thứ tự nhỏ hơn*) sẽ có ID như sau: $2112202200001, 2112202200002, 2112202200003$.

### Một số chức năng tiên quyết

- Chức năng **Check-in**: Sinh viên sẽ điền vào một form bao gồm các thông tin dưới đây, sau đó đánh dấu sinh viên đã Check-in buổi sinh hoạt:
    
    - Họ và tên sinh viên.
    - MSSV.
    - Mã lớp.
    - ID của buổi sinh hoạt.
    - Thời gian Check-in.

- Chức năng **Check-Out**: Sinh viên sẽ điền vào một form bao gồm các thông tin dưới đây, sau đó đánh dấu sinh viên đã check-out buổi sinh hoạt: 

    - Họ và tên sinh viên.
    - MSSV.
    - Mã lớp,
    - ID của buổi sinh hoạt.
    - Thời gian Check-out.

- Chức năng **Thêm/Sửa/Xóa Sinh viên của CLB**: Các chức năng sẽ cho phép thêm sinh viên vào cơ sở dữ liệu, sửa thông tin của từng sinh viên bất kì trong cơ sở dữ liệu và xóa sinh viên ra khỏi cơ sở dữ liệu.

- Chức năng **Tra cứu sinh viên** (dựa vào *họ và tên* hoặc *MSSV* của sinh viên). Kết quả tra cứu sẽ cho ra thông tin (họ và tên, MSSV, mã lớp) của sinh viên và danh sách các buổi sinh hoạt mà sinh viên tham gia hoặc không tham gia. *Cụ thể, danh sách sẽ gồm tất cả các buổi sinh hoạt được tổ chức kể từ sau ngày sinh viên tham gia vào CLB cho đến hiện tại, mỗi buổi sinh hoạt sẽ đi kèm với trạng thái sinh viên có hoặc không tham gia sinh hoạt.*

- Chức năng **Tra cứu buổi sinh hoạt của CLB** (dựa theo mã của buổi sinh hoạt). Kết quả tra cứu sẽ cho ra thông tin (Mã buổi sinh hoạt, ngày và thời gian diễn ra, chủ đề) của buổi sinh hoạt cùng với danh sách các sinh viên tham gia và sinh viên không tham gia. *Cụ thể, danh sách sẽ bao gồm tất cả các sinh viên có trong CLB, mỗi sinh viên sẽ có trạng thái tham gia hoặc không tham gia.*

- Chức năng **Xếp hạng**. Đưa ra danh sách $10$ sinh viên tham gia nhiều hoạt động nhất. Nếu có nhiều sinh viên có cùng số lần tham gia hoạt động, thì sắp xếp theo tên và họ của sinh viên (sắp xếp theo tên rồi đến họ).

- Chức năng **Thống kê sinh viên**. In ra danh sách sinh viên ở trong CLB gồm các thông tin:

    - MSSV.
    - Họ và tên sinh viên.
    - Mã lớp.
    - Số lượng buổi sinh hoạt tham gia (Bên cạnh đó có thể truy vấn ra được danh sách các buổi sinh hoạt đã tham gia của sinh viên đó). 
    - Số lượng buổi sinh hoạt không tham gia (Bên cạnh đó có thể truy vấn ra được danh sách các buổi sinh hoạt không tham gia của sinh viên đó).

- Chức năng **Thống kê các hoạt động**. In ra danh sách các hoạt động của CLB được sắp xếp theo ngày diễn ra (mới nhất đến cũ nhất), mỗi hoạt động đi kèm với danh sách sinh viên tham gia hoặc không tham gia hoạt động.

### Yêu cầu

- Thực hiện đầy đủ các chức năng đã được yêu cầu ở trên.
- Tạo giao diện người dùng (*User interface*) cho các chức năng nêu trên và các chức năng phụ khác nếu cần thiết.
- Cơ sở dữ liệu (thông tin sinh viên và thông tin các buổi sinh hoạt) sẽ được lưu dưới dạng file `*.txt`. Nếu có thể thì áp dụng cơ sở dữ liệu (database) vào để lưu trữ dữ liệu.
