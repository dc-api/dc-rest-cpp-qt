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
 * OAIOAuth2GetOpenIDConnectUserInfoResponse.h
 *
 * 
 */

#ifndef OAIOAuth2GetOpenIDConnectUserInfoResponse_H
#define OAIOAuth2GetOpenIDConnectUserInfoResponse_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {

class OAIOAuth2GetOpenIDConnectUserInfoResponse : public OAIObject {
public:
    OAIOAuth2GetOpenIDConnectUserInfoResponse();
    OAIOAuth2GetOpenIDConnectUserInfoResponse(QString json);
    ~OAIOAuth2GetOpenIDConnectUserInfoResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSub() const;
    void setSub(const QString &sub);
    bool is_sub_Set() const;
    bool is_sub_Valid() const;

    QString getEmail() const;
    void setEmail(const QString &email);
    bool is_email_Set() const;
    bool is_email_Valid() const;

    bool isEmailVerified() const;
    void setEmailVerified(const bool &email_verified);
    bool is_email_verified_Set() const;
    bool is_email_verified_Valid() const;

    QString getPreferredUsername() const;
    void setPreferredUsername(const QString &preferred_username);
    bool is_preferred_username_Set() const;
    bool is_preferred_username_Valid() const;

    QString getNickname() const;
    void setNickname(const QString &nickname);
    bool is_nickname_Set() const;
    bool is_nickname_Valid() const;

    QString getPicture() const;
    void setPicture(const QString &picture);
    bool is_picture_Set() const;
    bool is_picture_Valid() const;

    QString getLocale() const;
    void setLocale(const QString &locale);
    bool is_locale_Set() const;
    bool is_locale_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_sub;
    bool m_sub_isSet;
    bool m_sub_isValid;

    QString m_email;
    bool m_email_isSet;
    bool m_email_isValid;

    bool m_email_verified;
    bool m_email_verified_isSet;
    bool m_email_verified_isValid;

    QString m_preferred_username;
    bool m_preferred_username_isSet;
    bool m_preferred_username_isValid;

    QString m_nickname;
    bool m_nickname_isSet;
    bool m_nickname_isValid;

    QString m_picture;
    bool m_picture_isSet;
    bool m_picture_isValid;

    QString m_locale;
    bool m_locale_isSet;
    bool m_locale_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIOAuth2GetOpenIDConnectUserInfoResponse)

#endif // OAIOAuth2GetOpenIDConnectUserInfoResponse_H
