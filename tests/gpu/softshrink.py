from __future__ import print_function
import torch
import torch.nn as nn
import torch.nn.functional as F
import torch_ipex


dtype = torch.float
cpu_device = torch.device("cpu")
dpcpp_device = torch.device("dpcpp")
x_cpu = torch.tensor([[0.5, 1.5, 0.1], [2.2, 1.2, 1.7]], requires_grad=True, device = cpu_device)
y_cpu_output = torch.tensor([[0.5, 1.5, 0.1], [2.2, 1.2, 1.7]], requires_grad=True, device = cpu_device)

y = F.softshrink(x_cpu, 1)
y.backward(y_cpu_output)

print("CPU Result:")
print("x:", x_cpu)
print("softshrink:", y)
print("softshrink x_cpu_grad = ", x_cpu.grad)

x_dpcpp = torch.tensor([[0.5, 1.5, 0.1], [2.2, 1.2, 1.7]], requires_grad=True, device = dpcpp_device)
y_dpcpp_output = torch.tensor([[0.5, 1.5, 0.1], [2.2, 1.2, 1.7]], requires_grad=True, device = dpcpp_device)

y_dpcpp = F.softshrink(x_dpcpp, 1)
y_dpcpp.backward(y_dpcpp_output)

print("SYCL Result:")
print("x_dpcpp:", x_dpcpp.cpu())
print("softshrink dpcpp:", y_dpcpp.cpu())
print("softshrink x_dpcpp_grad = ", x_dpcpp.grad.cpu())


