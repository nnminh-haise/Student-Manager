# Quản lí sinh viên trong quá trình tham gia các hoạt động của CLB ITMC

Viết chương trình quản lí và thực hiện điểm danh các sinh viên tham gia các hoạt động của CLB ITMC. Mỗi sinh viên trước khi tham gia hoạt động sẽ được Check in để điểm danh và sau khi kết thúc buổi sinh hoạt chung với CLB sẽ thực hiện check out để xác định sinh viên có tham gia hết buổi sinh hoạt hay không.

Danh sách các sinh viên với mỗi **Sinh viên** có các thông tin sau:

- Họ và tên.
- Mã số sinh viên.
- Mã lớp.
- Số điện thoại.
- Số lần tham gia hoạt động của CLB.
- Số lần vắng, mỗi lần vắng sẽ kèm theo lí do. Nếu không có lí do thì sẽ mặc định là vắng không phép.

Danh sách các buổi sinh hoạt với mỗi *Buổi sinh hoạt* sẽ có các thông tin sau:

- ID của buổi sinh hoạt (*mỗi buổi sinh hoạt sẽ có một ID duy nhất*).
- Thời gian diễn ra buổi sinh hoạt (*Định dạng ngày, tháng, năm*).
- Chủ đề (*nội dung chính*) của buổi sinh hoạt.
- Danh sách sinh viên tham gia buổi sinh hoạt (*được sử dụng để sinh viên check-in và check-out mỗi khi tham gia hoạt động*).

Chi tiết cụ thể các chức năng như sau:

- Chức năng **Check-in**: Sinh viên sẽ điền vào một form bao gồm các thông tin: họ và tên, MSSV, mã lớp, ID của buổi sinh hoạt và thời gian Check-in và sau đó các thông tin này sẽ được lưu trữ và đánh giá.
- Chức năng **Check-Out**: Sinh viên sẽ điền vào một form bao gồm các thông tin: họ và tên, MSSV, mã lớp, ID của buổi sinh hoạt và thời gian Check-out và sau đó các thông tin này sẽ được lưu trữ và đánh giá.
- Chức năng **Thêm/Sửa/Xóa Sinh viên của CLB**: Chức năng sẽ tác động lên các thông tin của mỗi sinh viên.
- Chức năng **Tra cứu sinh viên** dựa vào họ và tên hoặc MSSV. Kết quả tra cứu sẽ cho ra thông tin cơ bản của sinh viên và danh sách các buổi tham gia hoặc vắng hoạt động của CLB.
- Chức năng **Tra cứu buổi sinh hoạt của CLB** theo mã của buổi sinh hoạt: Kết quả tra cứu sẽ cho ra thông tin cơ bản của buổi sinh hoạt cùng với danh sách các sinh viên tham gia và sinh viên không tham gia.

***Yêu cầu:*** Không cần tạo UI cho toàn bộ chương trình. Chỉ thực hiện phần logic và tạo form đơn giản trên console. Chương trình phải có menu để chọn thực hiện các chức năng đã liệt kê.