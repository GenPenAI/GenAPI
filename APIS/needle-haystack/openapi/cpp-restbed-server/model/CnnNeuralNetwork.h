/**
 * API Inspector
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CnnNeuralNetwork.h
 *
 * 
 */

#ifndef CnnNeuralNetwork_H_
#define CnnNeuralNetwork_H_



#include <string>
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>
#include "helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  CnnNeuralNetwork 
{
public:
    CnnNeuralNetwork() = default;
    explicit CnnNeuralNetwork(boost::property_tree::ptree const& pt);
    virtual ~CnnNeuralNetwork() = default;

    CnnNeuralNetwork(const CnnNeuralNetwork& other) = default; // copy constructor
    CnnNeuralNetwork(CnnNeuralNetwork&& other) noexcept = default; // move constructor

    CnnNeuralNetwork& operator=(const CnnNeuralNetwork& other) = default; // copy assignment
    CnnNeuralNetwork& operator=(CnnNeuralNetwork&& other) noexcept = default; // move assignment

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);


    /////////////////////////////////////////////
    /// CnnNeuralNetwork members

    /// <summary>
    /// This attribute is a variable named:Weights
    /// </summary>
    double getWeights() const;
    void setWeights(double value);

    /// <summary>
    /// This attribute is a variable named:Nodes
    /// </summary>
    int64_t getNodes() const;
    void setNodes(int64_t value);

    /// <summary>
    /// This attribute is a variable named:Kernels
    /// </summary>
    int64_t getKernels() const;
    void setKernels(int64_t value);

    /// <summary>
    /// This attribute is a variable named:Layers
    /// </summary>
    int64_t getLayers() const;
    void setLayers(int64_t value);

    /// <summary>
    /// This attribute is a variable named:Inputs
    /// </summary>
    double getInputs() const;
    void setInputs(double value);

    /// <summary>
    /// This attribute is a variable named:Activation
    /// </summary>
    std::string getActivation() const;
    void setActivation(std::string value);

    /// <summary>
    /// This attribute is a variable named:Depth
    /// </summary>
    int64_t getDepth() const;
    void setDepth(int64_t value);

    /// <summary>
    /// This attribute is a variable named:Stride
    /// </summary>
    int64_t getStride() const;
    void setStride(int64_t value);

    /// <summary>
    /// This attribute is a variable named:Outputs
    /// </summary>
    double getOutputs() const;
    void setOutputs(double value);

    /// <summary>
    /// This attribute is a variable named:Convolutionaloperation
    /// </summary>
    std::string getConvolutionaloperation() const;
    void setConvolutionaloperation(std::string value);

    /// <summary>
    /// This attribute is a variable named:Bias
    /// </summary>
    double getBias() const;
    void setBias(double value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getGPOE33() const;
    void setGPOE33(int64_t value);

    /// <summary>
    /// This attribute is a variable named:Pooling
    /// </summary>
    bool isPooling() const;
    void setPooling(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::string getGPO916() const;
    void setGPO916(std::string value);

    /// <summary>
    /// This attribute is a variable named:Padding
    /// </summary>
    bool isPadding() const;
    void setPadding(bool value);

    /// <summary>
    /// This attribute is a variable named:Errorbackpropagation
    /// </summary>
    bool isErrorbackpropagation() const;
    void setErrorbackpropagation(bool value);

    /// <summary>
    /// This attribute is a variable named:Filters
    /// </summary>
    int64_t getFilters() const;
    void setFilters(int64_t value);

protected:
    double m_Weights = 0.0;
    int64_t m_Nodes = 0L;
    int64_t m_Kernels = 0L;
    int64_t m_Layers = 0L;
    double m_Inputs = 0.0;
    std::string m_Activation = "";
    int64_t m_Depth = 0L;
    int64_t m_Stride = 0L;
    double m_Outputs = 0.0;
    std::string m_Convolutionaloperation = "";
    double m_Bias = 0.0;
    int64_t m_GPO_e33 = 5860L;
    bool m_Pooling = false;
    std::string m_GPO_916 = "5861";
    bool m_Padding = false;
    bool m_Errorbackpropagation = false;
    int64_t m_Filters = 0L;
};

std::vector<CnnNeuralNetwork> createCnnNeuralNetworkVectorFromJsonString(const std::string& json);

template<>
inline boost::property_tree::ptree toPt<CnnNeuralNetwork>(const CnnNeuralNetwork& val) {
    return val.toPropertyTree();
}

template<>
inline CnnNeuralNetwork fromPt<CnnNeuralNetwork>(const boost::property_tree::ptree& pt) {
    CnnNeuralNetwork ret;
    ret.fromPropertyTree(pt);
    return ret;
}

}
}
}
}

#endif /* CnnNeuralNetwork_H_ */