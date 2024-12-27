/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_40_partition_info_minimums.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_40_partition_info_minimums_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_40_partition_info_minimums_H_


#include "slurmrestapi/ModelBase.h"


namespace hm {
namespace slurm {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_40_partition_info_minimums
    : public ModelBase
{
public:
    V0_0_40_partition_info_minimums();
    virtual ~V0_0_40_partition_info_minimums();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_partition_info_minimums members

    /// <summary>
    /// MinNodes
    /// </summary>
    int32_t getNodes() const;
    bool nodesIsSet() const;
    void unsetNodes();

    void setNodes(int32_t value);


protected:
    int32_t m_Nodes;
    bool m_NodesIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_40_partition_info_minimums_H_ */
