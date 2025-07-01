/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAICreateTextThreadWithoutMessageRequest.h
 *
 * 
 */

#ifndef OAICreateTextThreadWithoutMessageRequest_H
#define OAICreateTextThreadWithoutMessageRequest_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {

class OAICreateTextThreadWithoutMessageRequest : public OAIObject {
public:
    OAICreateTextThreadWithoutMessageRequest();
    OAICreateTextThreadWithoutMessageRequest(QString json);
    ~OAICreateTextThreadWithoutMessageRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    qint32 getAutoArchiveDuration() const;
    void setAutoArchiveDuration(const qint32 &auto_archive_duration);
    bool is_auto_archive_duration_Set() const;
    bool is_auto_archive_duration_Valid() const;

    qint32 getRateLimitPerUser() const;
    void setRateLimitPerUser(const qint32 &rate_limit_per_user);
    bool is_rate_limit_per_user_Set() const;
    bool is_rate_limit_per_user_Valid() const;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    bool isInvitable() const;
    void setInvitable(const bool &invitable);
    bool is_invitable_Set() const;
    bool is_invitable_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    qint32 m_auto_archive_duration;
    bool m_auto_archive_duration_isSet;
    bool m_auto_archive_duration_isValid;

    qint32 m_rate_limit_per_user;
    bool m_rate_limit_per_user_isSet;
    bool m_rate_limit_per_user_isValid;

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    bool m_invitable;
    bool m_invitable_isSet;
    bool m_invitable_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAICreateTextThreadWithoutMessageRequest)

#endif // OAICreateTextThreadWithoutMessageRequest_H
