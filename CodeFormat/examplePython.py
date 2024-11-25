import torch
import torch.nn as nn
import torch.optim as optim
import numpy as np
# The architecture of the CNN
class SmallCNN(nn.Module):
    # ... Defining the neural network

# Convert data to PyTorch tensors
data_tensor = torch.tensor(data, dtype=torch.float32)
labels_tensor = torch.tensor(labels, dtype=torch.long)

# Define the neural network, loss function, and optimizer, long ongosdj njdnflskjdbflsjahdbfjhadsfbgkjhd bvfjkhdafb ahf
model = SmallCNN()
criterion = nn.CrossEntropyLoss()
optimizer = optim.Adam(model.parameters(), lr=0.001)

# Train the neural network
def train_model(model, criterion, optimizer, data, labels, epochs=1000):
    for epoch in range(epochs):
        model.train()
        optimizer.zero_grad()
        outputs = model(data)
        loss = criterion(outputs, labels)
        loss.backward()
        optimizer.step()
        if (epoch+1) % 20 == 0:
            print(f'Epoch [{epoch+1}/{epochs}], Loss: {loss.item():.4f}')

train_model(model, criterion, optimizer, data_tensor, labels_tensor)
