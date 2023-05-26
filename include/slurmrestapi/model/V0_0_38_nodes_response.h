/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_38_nodes_response.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_38_nodes_response_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_38_nodes_response_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_38_error.h"
#include "slurmrestapi/model/V0_0_38_meta.h"
#include "slurmrestapi/model/V0_0_38_node.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_38_meta;
class V0_0_38_error;
class V0_0_38_node;

/// <summary>
/// 
/// </summary>
class  V0_0_38_nodes_response
    : public ModelBase
{
public:
    V0_0_38_nodes_response();
    virtual ~V0_0_38_nodes_response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_38_nodes_response members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_38_meta> getMeta() const;
    bool metaIsSet() const;
    void unsetMeta();

    void setMeta(const std::shared_ptr<V0_0_38_meta>& value);

    /// <summary>
    /// slurm errors
    /// </summary>
    std::vector<std::shared_ptr<V0_0_38_error>>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<std::shared_ptr<V0_0_38_error>>& value);

    /// <summary>
    /// nodes info
    /// </summary>
    std::vector<std::shared_ptr<V0_0_38_node>>& getNodes();
    bool nodesIsSet() const;
    void unsetNodes();

    void setNodes(const std::vector<std::shared_ptr<V0_0_38_node>>& value);


protected:
    std::shared_ptr<V0_0_38_meta> m_Meta;
    bool m_MetaIsSet;
    std::vector<std::shared_ptr<V0_0_38_error>> m_Errors;
    bool m_ErrorsIsSet;
    std::vector<std::shared_ptr<V0_0_38_node>> m_Nodes;
    bool m_NodesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_38_nodes_response_H_ */
