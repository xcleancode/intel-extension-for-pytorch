// Autogenerated file by gen-gpu-ops.py. Do not edit directly!

#include <ATen/Tensor.h>

namespace at {

class AtenIpexTypeDPCPP {
 public:
  static at::Tensor add(const at::Tensor & self, const at::Tensor & other, at::Scalar alpha);
  static at::Tensor & add_(at::Tensor & self, const at::Tensor & other, at::Scalar alpha);
  static at::Tensor & add_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & other, at::Scalar alpha);
  static at::Tensor add(const at::Tensor & self, at::Scalar other, at::Scalar alpha);
  static at::Tensor & add_(at::Tensor & self, at::Scalar other, at::Scalar alpha);
  static at::Tensor as_strided(const at::Tensor & self, at::IntArrayRef size, at::IntArrayRef stride, c10::optional<int64_t> storage_offset);
  static at::Tensor bitwise_not(const at::Tensor & self);
  static at::Tensor & bitwise_not_(at::Tensor & self);
  static at::Tensor & bitwise_not_out(at::Tensor & out, const at::Tensor & self);
  static at::Tensor logical_not(const at::Tensor & self);
  static at::Tensor & logical_not_(at::Tensor & self);
  static at::Tensor & logical_not_out(at::Tensor & out, const at::Tensor & self);
  static at::Tensor convolution_overrideable(const at::Tensor & input, const at::Tensor & weight, const at::Tensor & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool transposed, at::IntArrayRef output_padding, int64_t groups);
  static at::Tensor & copy_(at::Tensor & self, const at::Tensor & src, bool non_blocking);
  static at::Tensor div(const at::Tensor & self, const at::Tensor & other);
  static at::Tensor & div_(at::Tensor & self, const at::Tensor & other);
  static at::Tensor & div_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & other);
  static at::Tensor empty(at::IntArrayRef size, const at::TensorOptions & options, c10::optional<at::MemoryFormat> memory_format);
  static at::Tensor & resize_(at::Tensor & self, at::IntArrayRef size, c10::optional<at::MemoryFormat> memory_format);
  static at::Tensor & fill_(at::Tensor & self, at::Scalar value);
  static at::Tensor & fill_(at::Tensor & self, const at::Tensor & value);
  static at::Tensor _log_softmax(const at::Tensor & self, int64_t dim, bool half_to_float);
  static at::Tensor mul(const at::Tensor & self, const at::Tensor & other);
  static at::Tensor & mul_(at::Tensor & self, const at::Tensor & other);
  static at::Tensor & mul_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & other);
  static at::Tensor mul(const at::Tensor & self, at::Scalar other);
  static at::Tensor & mul_(at::Tensor & self, at::Scalar other);
  static std::tuple<at::Tensor,at::Tensor,at::Tensor> native_batch_norm(const at::Tensor & input, const at::Tensor & weight, const at::Tensor & bias, const at::Tensor & running_mean, const at::Tensor & running_var, bool training, double momentum, double eps);
  static at::Tensor neg(const at::Tensor & self);
  static at::Tensor & neg_(at::Tensor & self);
  static at::Tensor & neg_out(at::Tensor & out, const at::Tensor & self);
  static at::Tensor & relu_(at::Tensor & self);
  static at::Tensor threshold(const at::Tensor & self, at::Scalar threshold, at::Scalar value);
  static at::Tensor & threshold_(at::Tensor & self, at::Scalar threshold, at::Scalar value);
  static at::Tensor & threshold_out(at::Tensor & out, const at::Tensor & self, at::Scalar threshold, at::Scalar value);
  static at::Tensor & resize_as_(at::Tensor & self, const at::Tensor & the_template, c10::optional<at::MemoryFormat> memory_format);
  static at::Tensor & sub_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & other, at::Scalar alpha);
  static at::Tensor sub(const at::Tensor & self, const at::Tensor & other, at::Scalar alpha);
  static at::Tensor & sub_(at::Tensor & self, const at::Tensor & other, at::Scalar alpha);
  static at::Tensor sub(const at::Tensor & self, at::Scalar other, at::Scalar alpha);
  static at::Tensor & sub_(at::Tensor & self, at::Scalar other, at::Scalar alpha);
  static at::Tensor rsub(const at::Tensor & self, const at::Tensor & other, at::Scalar alpha);
  static at::Tensor rsub(const at::Tensor & self, at::Scalar other, at::Scalar alpha);
  static at::Tensor addmm(const at::Tensor & self, const at::Tensor & mat1, const at::Tensor & mat2, at::Scalar beta, at::Scalar alpha);
  static at::Tensor view(const at::Tensor & self, at::IntArrayRef size);
  static at::Tensor & tril_(at::Tensor & self, int64_t diagonal);
  static at::Tensor & triu_(at::Tensor & self, int64_t diagonal);
  static at::Tensor & triu_out(at::Tensor & out, const at::Tensor & self, int64_t diagonal);
  static at::Tensor & tril_out(at::Tensor & out, const at::Tensor & self, int64_t diagonal);
  static at::Tensor & avg_pool2d_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override);
  static at::Tensor avg_pool2d(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override);
  static std::tuple<at::Tensor &,at::Tensor &> max_pool2d_with_indices_out(at::Tensor & out, at::Tensor & indices, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode);
  static std::tuple<at::Tensor,at::Tensor> max_pool2d_with_indices(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode);

};

}  // namespace ipex

