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
 * Dbv0_0_38_tres_list_inner.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_tres_list_inner_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_tres_list_inner_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Dbv0_0_38_tres_list_inner
    : public ModelBase
{
public:
    Dbv0_0_38_tres_list_inner();
    virtual ~Dbv0_0_38_tres_list_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_tres_list_inner members

    /// <summary>
    /// TRES type
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// TRES name (optional)
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// database id
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(int32_t value);

    /// <summary>
    /// count of TRES
    /// </summary>
    int32_t getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(int32_t value);


protected:
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    int32_t m_Id;
    bool m_IdIsSet;
    int32_t m_Count;
    bool m_CountIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_tres_list_inner_H_ */
