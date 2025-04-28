#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    // Add child components before sizing
    addAndMakeVisible(toggleButton);
    toggleButton.setButtonText("On"); // adjust or remove if you want an icon‑only button

    setSize(600, 400);
}

MainComponent::~MainComponent() = default;

//==============================================================================
void MainComponent::paint(juce::Graphics& g)
{
    // Our component is opaque, so we must completely fill the background with a solid colour
    g.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));

    g.setFont(juce::Font(16.0f));
    g.setColour(juce::Colours::white);
    g.drawText("Hello World!", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    // Position child components
    toggleButton.setBounds(20, 20, 30, 30);
}
