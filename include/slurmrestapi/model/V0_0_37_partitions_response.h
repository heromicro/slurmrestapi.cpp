/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_37_partitions_response.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_37_partitions_response_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_37_partitions_response_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_37_partition.h"
#include <vector>
#include "slurmrestapi/model/V0_0_37_error.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_37_error;
class V0_0_37_partition;

/// <summary>
/// 
/// </summary>
class  V0_0_37_partitions_response
    : public ModelBase
{
public:
    V0_0_37_partitions_response();
    virtual ~V0_0_37_partitions_response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_37_partitions_response members

    /// <summary>
    /// slurm errors
    /// </summary>
    std::vector<std::shared_ptr<V0_0_37_error>>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<std::shared_ptr<V0_0_37_error>>& value);

    /// <summary>
    /// partition info
    /// </summary>
    std::vector<std::shared_ptr<V0_0_37_partition>>& getPartitions();
    bool partitionsIsSet() const;
    void unsetPartitions();

    void setPartitions(const std::vector<std::shared_ptr<V0_0_37_partition>>& value);


protected:
    std::vector<std::shared_ptr<V0_0_37_error>> m_Errors;
    bool m_ErrorsIsSet;
    std::vector<std::shared_ptr<V0_0_37_partition>> m_Partitions;
    bool m_PartitionsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_37_partitions_response_H_ */
