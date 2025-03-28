import numpy as np
import matplotlib.pyplot as plt
A = np.random.rand(5, 5)

fig, axs = plt.subplots(1, 3, figsize=(10,3))
for ax,interp in zip(axs, ['nearest', 'bilinear', 'bicubic']):
    ax.imshow(A,interpolation=interp)
    ax.set_title(interp.capitalize())
    ax.grid(True)
plt.show()